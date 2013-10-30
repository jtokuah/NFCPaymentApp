/* Copyright (c) 2012 Research In Motion Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "QtObjectFormatter.hpp"
#include "app.hpp"
#include "Person.hpp"

#include <bb/cascades/ActivityIndicator>
#include <bb/cascades/AbstractPane>
#include <bb/cascades/AbstractTextControl>
#include <bb/cascades/ActiveTextHandler>
#include <bb/cascades/Application>
#include <bb/system/SystemDialog>
#include <bb/cascades/OrientationSupport>
#include <bb/data/SqlDataAccess>
#include <bb/data/SqlConnection>
#include <bb/data/JsonDataAccess>
#include <bps/dialog.h>
#include <screen/screen.h>

#include <QtSql/QtSql>

#include <QDebug>
#include "MainMenu.hpp"
#include "NfcWorker.hpp"
#include "HttpSampleApp.hpp"
#include "RequestHeaders.hpp"
#include "PostHttp.hpp"
#include "AppSettings.hpp"
#include "json.hpp"
#include "LoginDialog.hpp"
#include "Dialog.hpp"


using namespace bb::cascades;
using namespace bb::system;
using namespace bb::data;
using namespace QtJson;

QmlDocument *transactionQml;
QmlDocument *rootQml;
AbstractPane *transaction;
AbstractPane *root;
bool activeTransaction;
QMap<QString, QVariant> jsonMessage;

static QString assetPath(const QString& assetName)
{
    return QDir::currentPath() + "/app/native/assets/" + assetName;
}

//! [0]
App::App()
    : m_dataModel(0),_nfcManager(0)/*, _httpSampleApp(0)*/
{
    // Initialize the Group Data Model before setitng up our QML Scene
    // as the QML scene will bind to the data model
//    initDataModel();

	qmlRegisterType<LoginDialog>("Dialog.Login", 1, 0, "LoginDialog");

    // Create a QMLDocument from the definition in main.qml
    rootQml = QmlDocument::create("asset:///main.qml");

    //-- setContextProperty expose C++ object in QML as an variable
    // this must come before the next line so the root is instantiated after app is defined.
    rootQml->setContextProperty("_app", this);

    // Creates the root node object as defined in main.qml
    root = rootQml->createRootObject<AbstractPane>();

    // Give the application the root node to display.
    Application::instance()->setScene(root);

    // Initialize the database, ensure a connection can be established
    // and that all the required tables and initial data exists
//    const bool dbInited = initDatabase();

    // Inform the UI if the database was successfully initialized or not
//    root->setProperty("databaseOpen", dbInited);

    activeTransaction = false;
	_nfcManager = NfcManager::getInstance();
	_nfcManager->_workerInstance->appObject = this;
	_nfcManager->startEventProcessing();

	loadJsonMessageStructure();
}
//! [0]
void App::initDataModel()
{
    // Note: The Group Data Model is joining this objects tree as a child (for memory management)
    m_dataModel = new GroupDataModel(this);
    m_dataModel->setSortingKeys(QStringList() << "customerID");
    m_dataModel->setGrouping(ItemGrouping::None);
}
//! [1]
bool App::initDatabase()
{
    // Initialize the database and create any tables needed for the app to function
    // properly if they do not already exist.
    // IMPORTANT NOTE: This function 'drops' the 'customers' table and recreates it
    // each time the application starts. This is done to ensure the application starts
    // with the same table each time for experimental purposes. This is not typical in
    // most applications however.
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("./data/customerDatabase.db");

    // If we cannot open a connection to the database, then fail initialization
    // and display an error message
    if (database.open() == false) {
        const QSqlError error = database.lastError();
        alert(tr("Error opening connection to the database: %1").arg(error.text()), "Alert");
        qDebug() << "\nDatabase NOT opened.";
        return false; // return as if we cannot open a connection to the db, then below calls
                      // will also fail
    }

    // Drop the 'customers' table if it exists so that the application
    // always start with an empty table.
    // Note: A typical application would NOT do this.
    // open the default database.
    QSqlQuery query(database);
    if (query.exec("DROP TABLE IF EXISTS customers")) {
        qDebug() << "Table dropped.";
    } else {
        const QSqlError error = query.lastError();
        alert(tr("Drop table error: %1").arg(error.text()), "Alert");
    }

    // Create the 'customers' table that was just dropped (if it existed)
    // with no data
    const QString createSQL = "CREATE TABLE customers "
                              "  (customerID INTEGER PRIMARY KEY AUTOINCREMENT, "
                              "  firstName VARCHAR, "
                              "  lastName VARCHAR);";
    if (query.exec(createSQL)) {
        qDebug() << "Table created.";
    } else {
        const QSqlError error = query.lastError();
        alert(tr("Create table error: %1").arg(error.text()), "Alert");
        return false;
    }

    return true;
}
//! [1]
// -----------------------------------------------------------------------------------------------
// CRUD Functions
//! [2]
bool App::createRecord(const QString &firstName, const QString &lastName)
{
    // 1. Verify the users input is valid.
    //    The SqlQuery's bind functionality will escape a users input ensuring that
    //    characters such as a quote will be properly accepted in the database and
    //    prevent Sql Injection attacks. However, this cannot be relied upon to validate
    //    all the data. In this case, we ensure that at least the firstname OR lastname
    //    contains some form of text.
    if (firstName.trimmed().isEmpty() && lastName.trimmed().isEmpty()) {
        alert(tr("You must provide a first or last name."), "Alert");
        return false;
    }

    // 2. Get the local DB connection. Note, called database()
    //    Will automatically open a connection to the database
    //    IMPORTANT NOTE: A QSqlQuery object can be created without a reference to
    //    the QSqlDatabase object (it will assume the default database connection
    //    if one is not provided), but, unlike a call to QSqlDatabase::database()
    //    it will not automatically open a connection to the database if it is
    //    currently closed.
    QSqlDatabase database = QSqlDatabase::database();

    // NOTE: Some applications might verify that the table being inserted to exists
    // at this point, however our application verifies all tables exist at application
    // startup.



    // 3. Create an QSqlQuery object with which you can execute queries
    //    In this example we bind parameters in the query. A large advantage to using
    //    bindings (aside from performance enhancements) is that input is automatically
    //    escaped avoiding potential issues with odd characters (quotes) and prevents
    //    SQL Injection attacks.
    //    Note that for databases that do not support bindings, Qt simulates the binding
    //    effects.
    //    IMPORTANT NOTE: If ever accepting user information without using bindings,
    //    be sure to 'escape' your queries.
    QSqlQuery query(database);
    query.prepare("INSERT INTO customers"
                  "    (firstName, lastName) "
                  "    VALUES (:firstName, :lastName)");
    query.bindValue(":firstName", firstName);
    query.bindValue(":lastName", lastName);

    // 4. Execute the query and check the result
    bool success = false;
    if (query.exec()) {
        alert(tr("Create record succeeded."), "Alert");
        success = true;
    } else {
        // If 'exec' fails, error information can be accessed via the lastError function
        // the last error is reset every time exec is called.
        const QSqlError error = query.lastError();
        alert(tr("Create record error: %1").arg(error.text()), "Alert");
    }

    // 5. Optionally close the database connection if we no longer plan to use it
    //    Note that calling QSqlDatabase::database() will automatically re-open
    //    the connection for us.
    //    NOTE: Closing the database invalidates any QSqlQuery objects you have created
    //    with this database connection.
    database.close();

    return success;
}

bool App::updateRecord(const QString &customerID, const QString &firstName, const QString &lastName)
{
    // 1. Verify the users input is valid.
    //    The SqlQuery's bind functionality will escape a users input ensuring that
    //    characters such as a quote will be properly accepted in the database and
    //    prevent Sql Injection attacks. However, this cannot be relied upon to validate
    //    all the data. In this case, the customerID is submitted as a string. The user
    //    might submit an empty id or characters. In these cases it is best to try to filter this input.
    //    The SqlQuery bindings do not protect your application from these kinds of inputs.
    //      IMPORTANT NOTE: In any application ALL user input should be filtered!
    bool intConversionGood = false;
    const int customerIDKey = customerID.toInt(&intConversionGood);
    if (!intConversionGood) {
        alert(tr("You must provide valid integer key."), "Alert");
        return false;
    }

    // 2. Get the local DB connection. Note, called database()
    //    Will automatically open a connection to the database
    //    IMPORTANT NOTE: A QSqlQuery object can be created without a reference to
    //    the QSqlDatabase object (it will assume the default database connection
    //    if one is not provided), but, unlike a call to QSqlDatabase::database()
    //    it will not automatically open a connection to the database if it is
    //    currently closed.
    QSqlDatabase database = QSqlDatabase::database();

    // 3. Create an QSqlQuery object with which you can execute queries
    //    In this example we bind parameters in the query. A large advantage to using
    //    bindings (aside from performance enhancements) is that input is automatically
    //    escaped avoiding potential issues with odd characters (quotes) and prevents
    //    SQL Injection attacks.
    //    Note that for databases that do not support bindings, Qt simulates the binding
    //    effects.
    //    IMPORTANT NOTE: If ever accepting user information without using bindings,
    //    be sure to 'escape' your queries.
    QSqlQuery query(database);
    const QString sqlCommand = "UPDATE customers "
                               "    SET firstName = :firstName, lastName = :lastName"
                               "    WHERE customerID = :customerID";
    query.prepare(sqlCommand);

    // Note int he below bindings that firstName, lastName are strings, while customerIDKey
    // is an integer. The bindValue function is operator overloaded to accept multiple datatypes.
    query.bindValue(":firstName", firstName);
    query.bindValue(":lastName", lastName);
    query.bindValue(":customerID", customerIDKey);

    // 4. Execute the query and check the result for errors
    bool updated = false;
    if (query.exec()) {
        // 5. Verify that a row was modified, if not, there was no customer
        //    with the specified ID
        if (query.numRowsAffected() > 0) {
            alert(tr("Customer with id=%1 was updated.").arg(customerID), "Alert");
            updated = true;
        } else {
            alert(tr("Customer with id=%1 was not found.").arg(customerID), "Alert");
        }
    } else {
        alert(tr("SQL error: %1").arg(query.lastError().text()), "Alert");
    }

    // 6. Optionally close the database connection if we no longer plan to use it
    //    Note that calling QSqlDatabase::database() will automatically re-open
    //    the connection for us.
    //    NOTE: Closing the database invalidates any QSqlQuery objects you have created
    //    with this database connection.
    database.close();

    return updated;
}

bool App::deleteRecord(const QString &customerID)
{
    // 1. Verify the users input is valid.
    //    The SqlQuery's bind functionality will escape a users input ensuring that
    //    characters such as a quote will be properly accepted in the database and
    //    prevent Sql Injection attacks. However, this cannot be relied upon to validate
    //    all the data. In this case, the customerID is submitted as a string. The user
    //    might submit an empty id. In these cases it is best to try to filter this input.
    //    The SqlQuery bindings do not protect your application from these kinds of inputs.
    //      IMPORTANT NOTE: In any application ALL user input should be filtered!
    bool intConversionGood = false;
    const int customerIDnumber = customerID.toInt(&intConversionGood);
    if (!intConversionGood) {
        alert(tr("You must provide valid integer key."), "Alert");
        return false;
    }

    // 2. Get the local DB connection. Note, called database()
    //    Will automatically open a connection to the database
    //    IMPORTANT NOTE: A QSqlQuery object can be created without a reference to
    //    the QSqlDatabase object (it will assume the default database connection
    //    if one is not provided), but, unlike a call to QSqlDatabase::database()
    //    it will not automatically open a connection to the database if it is
    //    currently closed.
    QSqlDatabase database = QSqlDatabase::database(); // open the default database.

    // 3. Create an QSqlQuery object with which you can execute queries
    //    In this example we bind parameters in the query. A large advantage to using
    //    bindings (aside from performance enhancements) is that input is automatically
    //    escaped avoiding potential issues with odd characters (quotes) and prevents
    //    SQL Injection attacks.
    //    Note that for databases that do not support bindings, Qt simulates the binding
    //    effects.
    //    IMPORTANT NOTE: If ever accepting user information without using bindings,
    //    be sure to 'escape' your queries.
    QSqlQuery query(database);
    query.prepare("DELETE FROM customers WHERE customerID=:customerID");
    query.bindValue(":customerID", customerIDnumber);

    // 4. Execute the query and check the result for errors
    bool deleted = false;
    if (query.exec()) {
        // 5. Verify that a row was modified, if not, there was no customer
        //    with the specified ID
        if (query.numRowsAffected() > 0) {
            alert(tr("Customer with id=%1 was deleted.").arg(customerID), "Alert");
            deleted = true;
        } else {
            alert(tr("Customer with id=%1 was not found.").arg(customerID), "Alert");
        }
    } else {
        alert(tr("SQL error: %1").arg(query.lastError().text()), "Alert");
    }

    // 6. Optionally close the database connection if we no longer plan to use it
    //    Note that calling QSqlDatabase::database() will automatically re-open
    //    the connection for us.
    //    NOTE: Closing the database invalidates any QSqlQuery objects you have created
    //    with this database connection.
    database.close();

    return deleted;
}
//! [2]
//! [3]
// Read all records from the database.
// Clear the data model and refill it.
void App::readRecords()
{
    // 1. Get the local DB connection. Note, called database()
    //    Will automatically open a connection to the database
    //    IMPORTANT NOTE: A QSqlQuery object can be created without a reference to
    //    the QSqlDatabase object (it will assume the default database connection
    //    if one is not provided), but, unlike a call to QSqlDatabase::database()
    //    it will not automatically open a connection to the database if it is
    //    currently closed.
    QSqlDatabase database = QSqlDatabase::database(); // opens the default database.

    // 2. Create a query to search for the records
    //    IMPORTANT NOTE: If accepting user input and not using bindings, be sure
    //    to escape it to allow quote characters, and prevent SQL Injection attacks.
    //    The below example is not a prepared statement and does not use bindings as
    //    there is no user input to accept.
    QSqlQuery query(database);
    const QString sqlQuery = "SELECT customerID, firstName, lastName FROM customers";

    // 3. Call 'exec' on the SQL Query. Note, that when using a SELECT action,
    //    the retrieved records are stored in the query and accessible by several
    //    different functions (see QSqlQuery documentation for more information).
    if (query.exec(sqlQuery)) {

        // Get the field indexes. We know the order of the fields, and could skip this step.
        // However this will still work if the fields change order in the query string.
        const int customerIDField = query.record().indexOf("customerID");
        const int firstNameField = query.record().indexOf("firstName");
        const int lastNameField = query.record().indexOf("lastName");

        // The data will be displayed in a group data model
        // Clear any previous reads from the data model first
        m_dataModel->clear();

        // 4. Start navigating through the records by calling the 'next' function.
        //    The next function will position the 'query' at the next record result
        //    allowing you to access the record data via the 'value' function.
        //    The next record will return true as long as it continues to point to valid
        //    record. When there are no longer any records it will return false.
        int recordsRead = 0;
        while (query.next()) {
            // 5. Access the data (stored in the query) via the field indexes
            //    and add the data to the model.
            //    NOTE: When adding an object to a DataModel, the DataModel sets
            //    itself as the parent of the object if no parent has already been
            //    set. Therefore, when clearing or removing an item from the data model
            //    the data model will destory the object if it is the parent of the object.
            Person *person = new Person(query.value(customerIDField).toString(),
                                        query.value(firstNameField).toString(),
                                        query.value(lastNameField).toString());
            m_dataModel->insert(person);
            recordsRead++;
        }
        qDebug() << "Read " << recordsRead << " records succeeded";

        if (recordsRead == 0) {
            alert(tr("The customer table is empty."), "Alert");
        }
    } else {
        alert(tr("Read records failed: %1").arg(query.lastError().text()), "Alert");
    }

    // 6. Optionally close the database connection if we no longer plan to use it
    //    Note that calling QSqlDatabase::database() will automatically re-open
    //    the connection for us.
    //    NOTE: Closing the database invalidates any QSqlQuery objects you have created
    //    with this database connection.
    database.close();
}
//! [3]
GroupDataModel* App::dataModel() const
{
    return m_dataModel;
}

// -----------------------------------------------------------------------------------------------
// Alert Dialog Box Functions
void App::alert(const QString &message, const QString &title)
{
    SystemDialog *dialog; // SystemDialog uses the BB10 native dialog.
    dialog = new SystemDialog(tr("OK"), 0); // New dialog with on 'Ok' button, no 'Cancel' button
    dialog->setTitle(title); // set a title for the message
    dialog->setBody(message); // set the message itself
    dialog->setDismissAutomatically(true); // Hides the dialog when a button is pressed.

    // Setup slot to mark the dialog for deletion in the next event loop after the dialog has been accepted.
    bool ok = connect(dialog, SIGNAL(finished(bb::system::SystemUiResult::Type)), dialog, SLOT(deleteLater()));
    Q_ASSERT(ok);
    dialog->show();
}

bool App::authenticateUser(const QString &uname, const QString &pwd)
{
    if ((uname.trimmed().isEmpty() || pwd.trimmed().isEmpty())) {
        alert(tr("You must provide valid username and password to login"), "Login to NFC Payment App");
        return false;
    }

    //Base64-encode login credentials before sending to server
    QString username  = QString::fromUtf8(uname.toUtf8().toBase64());
    QString password  = QString::fromUtf8(pwd.toUtf8().toBase64());

    //load message structure and build outgoing message
    loadJsonMessageStructure();
    QMap<QString, QVariant>::const_iterator it;
    it = jsonMessage.find("customer");
    if (it != jsonMessage.end()) {
    	QMap<QString, QVariant> customer = it.value().toMap();
        customer.insert("custUsername", username);
        customer.insert("custPWD", password);
        jsonMessage.remove("customer");
        jsonMessage.insert("customer", customer);
    }
    it = jsonMessage.find("messageType");
    if (it != jsonMessage.end()) {
    	QMap<QString, QVariant> messageType = it.value().toMap();
    	messageType.insert("code", SERVER_OUT_CODE_LOGIN_REQ);
    	messageType.insert("request", true);
        jsonMessage.remove("messageType");
        jsonMessage.insert("messageType", messageType);
    }

    //send authentication message to server and get server response
    QString message = JSONMapToString(jsonMessage);
    qDebug() << "XXXX App::Message to server: " << message;
    QString HTTPMethod = "POST";
    _httpSampleApp = new HttpSampleApp;
    _httpSampleApp->setUseHttps(true);
    serverResponseType serverResponse = _httpSampleApp->messageServer(HTTPMethod, message);
    QString response = JSONMapToString(serverResponse.dataMap);
    qDebug() << "XXXX App::Response from server: " << response;

    //check if authentication was successful
	if(serverResponse.dataMap.value("code").toInt() == SERVER_IN_CODE_LOGIN_SUCCESS){
		transactionQml = QmlDocument::create("asset:///transaction.qml");
		transactionQml->setContextProperty("_app", this);
		transaction = transactionQml->createRootObject<AbstractPane>();
		Application::instance()->setScene(transaction);
		qDebug() << "XXXX App::User authentication successful";
		return true;
	}

	//check if authentication failed
	else if(serverResponse.dataMap.value("code").toInt() == SERVER_IN_CODE_LOGIN_FAILURE){
		alert(tr("%1").arg(serverResponse.dataMap.value("details").toString()), "Login failed!");
		qDebug() << "XXXX App::User authentication failed! - " << serverResponse.dataMap.value("details").toString();
		return false;
	}

	//check if there was a server error
	else{
		alert(tr("%1").arg(serverResponse.responseMessage), "Login failed!");
		qDebug() << "XXXX App::User authentication failed! - " << serverResponse.responseMessage;
		return false;
	}
}

void App::handleTransaction()
{
	if(activeTransaction){
		rootQml->setContextProperty("_app", this);
		root = rootQml->createRootObject<AbstractPane>();
		Application::instance()->setScene(root);
		activeTransaction = false;
		return;
	}
	else {
		activeTransaction = true;
	}

	//restart event processing if this is not the first transaction
	QObject *button = transaction->findChild<QObject*>("exitButton");
	if(button){
		if ((button->property("visible")).toBool()){
			_nfcManager->startEventProcessing();
			exitButton(false);
		}
	}

	showMessage("", "statusText");
	showMessage("Place BlackBerry on the debit reader", "topText");
	buttonText("Cancel Payment");

	_nfcManager->startEchoEmulation();
}

void App::showMessage(const QString &text, const QString &field)
{
	qDebug() << "XXXX App::showMessage entered";
	AbstractTextControl *textControl = transaction->findChild<AbstractTextControl*>(field);
	if(textControl){
		textControl->setText(text);
	}
}

void App::activityIndicator(const QString &command)
{
	ActivityIndicator *indicator = transaction->findChild<ActivityIndicator*>("indicator");
	if(indicator){
		if (command == "start") indicator->start();
		else if (command == "stop") indicator->stop();
	}
}

void App::exitButton(bool value)
{
	QObject *button = transaction->findChild<QObject*>("exitButton");
	if(button){
		button->setProperty("visible", value);
	}
}

void App::buttonText(const QString &text)
{
	QObject *button = transaction->findChild<QObject*>("button");
	if(button){
		button->setProperty("text", text);
	}
}

void App::activityFlag(bool value)
{
	activeTransaction = value;
}

void App::loadJsonMessageStructure()
{
	//Load structure from JSON file and store in String variable
	QFile jsonFile(assetPath("JSONmessageStructure.json"));
    if (!jsonFile.open(QFile::ReadOnly)) {
        qDebug() << "Failed to open JSON file: " << jsonFile.fileName();
        return;
    }
    const QString data = QString::fromUtf8(jsonFile.readAll());

    //parse JSON message structure into Map
	QVariant jsonStructure = QtJson::parse(data);
	jsonMessage = jsonStructure.toMap();
	qDebug() <<"XXXX App::jsonMessageStructure: " << JSONMapToString(jsonMessage);
}

QString App::JSONMapToString(QMap<QString, QVariant> map)
{
	QString out;
	QVariant temp = QVariant(map);
	JsonDataAccess ja;
	ja.saveToBuffer(temp, &out);
	return out;
}
