/* Copyright (c) 2012, 2013  BlackBerry Limited.
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
#ifndef APP_HPP
#define APP_HPP

#include "json.hpp"
#include <bb/cascades/QmlDocument>
#include <bb/data/SqlConnection>
#include <bb/cascades/GroupDataModel>
#include "NfcManager.hpp"
#include "QtObjectFormatter.hpp"
#include "HttpSampleApp.hpp"
#include "LoginDialog.hpp"
#include "Dialog.hpp"
#include <QtCore/QFile>
#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtCore/QVariant>
#include <QtCore>

using namespace bb::cascades;
using namespace QtJson;

extern QmlDocument *transactionQml;
extern QmlDocument *rootQml;
extern AbstractPane *transaction;
extern AbstractPane *root;
extern bool activeTransaction;
extern QVariant parse(const QString &json);

/* Outgoing transaction message codes sent to the payment server */
	typedef enum{
		SERVER_OUT_CODE_INVALID = -1,
		SERVER_OUT_CODE_LOGIN_REQ = 0,
		SERVER_OUT_CODE_SIGN_UP_REQ = 1,
		SERVER_OUT_CODE_GET_USER_PROFILE = 2,
	    //all new codes should be placed above this line
	    SERVER_OUT_CODE_MAX
	}paymentServerOutgoingCodeType;

	/* Incoming transaction message codes received from the payment server */
	typedef enum{
		SERVER_IN_CODE_INVALID = -1,
		SERVER_IN_CODE_LOGIN_SUCCESS = 0,
		SERVER_IN_CODE_LOGIN_FAILURE = 1,
	    SERVER_IN_CODE_SIGN_UP_SUCCESS = 2,
	    SERVER_IN_SIGN_UP_FAILURE = 3,
	    SERVER_IN_SEND_USER_PROFILE_SUCCESS = 4,
	    SERVER_IN_SEND_USER_PROFILE_FAILURE = 5,
		//all new codes should be placed above this line
		SERVER_IN_CODE_MAX
	}paymentServerIncomingCodeType;

	//Structure of user profile data stored on the payment server
	typedef struct paymentServerUserProfileType {
	    int userNo;
	    QString email;
	    QString username;
	    QString password;             //base64-encoded
	    QString userType;
	    QString firstName;
	    QString middleName;
	    QString lastName;
	    int DOBDay;
	    int DOBMonth;
	    int DOBYear;
	    QString occupation;
	    int SIN;
	    QString address1;
	    QString address2;
	    QString city;
	    QString province;
	    QString country;
	    QString postalCode;
	    int phoneNumber;
	    bool receiveCommunication;
	    QString bankCode;             //base64-encoded
	    QString accountNum;           //base64-encoded
	    QString accountPWD;      //base64-encoded
	    double acctBalance;          //base64-encoded
	    QString transactionHistory;
	    int POSHWID;
	    QString currentDK;            //base64-encoded
	    QString nextDK;               //base64-encoded
	    QString authenticationString;  //base64-encoded
	    QString createTime;
	}paymentServerUserProfileType;
	extern paymentServerUserProfileType userProfile;

/*
 * @brief Declaration of our application's class (as opposed to the BB Cascades
 *  application class that contains our application).
 */
class App: public QObject
{
    // Classes that inherit from QObject must have the Q_OBJECT macro so
    // the meta-object compiler (MOC) can add supporting code to the application.
    Q_OBJECT

    // A property that is used by the list view in QML
    Q_PROPERTY(bb::cascades::DataModel* dataModel READ dataModel CONSTANT)

public:
    App();

    // "Q_INVOKABLE" allows these functions to be called from main.qml
    Q_INVOKABLE bool createRecord(const QString &firstName, const QString &lastName);
    Q_INVOKABLE void readRecords();
    Q_INVOKABLE bool updateRecord(const QString &key, const QString &firstName, const QString &lastName);
    Q_INVOKABLE bool deleteRecord(const QString &key);
    Q_INVOKABLE bool authenticateUser(const QString &username, const QString &password);
    Q_INVOKABLE bool createUserProfile();
    Q_INVOKABLE void handleTransaction();
    QString JSONMapToString(QMap<QString, QVariant> map);
//    Q_INVOKABLE void showMessage(const QString &text, const QString &field);
//    Q_INVOKABLE void activityIndicator(const QString &command);

public slots:
	void showMessage(const QString &text, const QString &field);
	void activityIndicator(const QString &command);
	void exitButton(bool value);
	void buttonText(const QString &text);
	void activityFlag(bool value);

private:
    // Functions to call upon initialization to setup the model and database
    void initDataModel();
    bool initDatabase();
    void loadJsonMessageStructure();

    NfcManager* _nfcManager;
    HttpSampleApp* _httpSampleApp;

    // To alert the user if something has gone wrong
    void alert(const QString &message, const QString &title);

    // The getter method for the property
    bb::cascades::GroupDataModel* dataModel() const;

    // The data shown by the list view.
    GroupDataModel* m_dataModel;

};

#endif
