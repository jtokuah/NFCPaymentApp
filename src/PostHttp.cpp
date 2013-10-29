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



#include "AppSettings.hpp"

#include <bb/data/JsonDataAccess>
#include <QtCore/QObject>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QSslConfiguration>
#include <QUrl>
#include "PostHttp.hpp"
#include "app.hpp"

PostHttp* PostHttp::_instance;
bool receivedReply;
serverResponseType serverResponse;
QEventLoop loop;

/**
 * PostHttp
 *
 * In this class you will learn the following:
 * -- How to use QNetworkAccessManager to make a network request
 * -- How to set Http headers for your request
 * -- How to setup a secure connection with QSslConfiguration
 * -- How to read a network response with QNetworkReply
 * -- How to parse JSON data using JsonDataAccess
 */
//! [0]
PostHttp::PostHttp(QObject* parent)
    : QObject(parent)
    , m_networkAccessManager(new QNetworkAccessManager(this))
{
	this->receivedReply = false;
	this->serverResponse.responseMessage = "";
}
//! [0]

/**
 * PostHttp::post
 *
 * Make a network request to httpbin.org/post with POST data and get
 * the response
 */
//! [1]

PostHttp* PostHttp::getInstance() {
	if (_instance == 0) {
		_instance = new PostHttp;
	}
	return _instance;
}

serverResponseType PostHttp::post(const QString &body)
{
	serverResponseType response;
	this->receivedReply = false;
    //const QUrl url("http://httpbin.org/post");
	QUrl url("https://paymentserver.dynu.com");


    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "text/plain");

    if (AppSettings::isUsingHttps()) {
        //request.setUrl(QUrl("https://httpbin.org/post"));
        request.setUrl(QUrl("https://paymentserver.dynu.com"));

        QSslConfiguration config = request.sslConfiguration();
        config.setPeerVerifyMode(QSslSocket::VerifyNone);
        config.setProtocol(QSsl::TlsV1);
        request.setSslConfiguration(config);
    }

    QNetworkReply* reply = m_networkAccessManager->post(request, body.toAscii());
	qDebug() << "XXXX PostHttp::post - 'POST' request sent" ;

    bool ok = loop.connect(reply, SIGNAL(finished()), this, SLOT(onGetReply()));
    Q_ASSERT(ok);
    Q_UNUSED(ok);
    loop.exec(QEventLoop::AllEvents);

	response = this->serverResponse;

	return response;
}

/**
 * PostHttp::onGetReply()
 *
 * SLOT
 * Read and return the http response from our http post request
 */
void PostHttp::onGetReply()
{
    QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());
    QMap<QString, QVariant> jsonreply;

    QString response;
    if (reply) {
    	qDebug() << "XXXX PostHttp::onGetReply - Got reply";
        if (reply->error() == QNetworkReply::NoError) {
            const int available = reply->bytesAvailable();

            if (available > 0) {
                //const QByteArray buffer(reply->readAll());
                const QString data = QString::fromUtf8(reply->readAll());
                qDebug() << "XXXX PostHttp::onGetReply - bytes available: " << available;

                //bb::data::JsonDataAccess ja;
                //const QVariant jsonva = ja.loadFromBuffer(buffer);
                const QVariant jsonva = QtJson::parse(data);
                //if (ja.hasError()){
                //	qDebug() <<"XXXX PostHttp::onGetReply - JsonDataAccess Error:" << ja.error().errorMessage();
                //}
                jsonreply = jsonva.toMap();
                qDebug() << "XXXX PostHttp::onGetReply - Server response: \n" << data;
                //response+= jsonva.toString();
                response += data;
            }

        } else {
            response =  tr("Server Error: %1.").arg(reply->errorString());
            qDebug() << response;
        }
        reply->deleteLater();
    }

    if (response.trimmed().isEmpty()) {
        response = tr("No response from payment server");
    }

    serverResponse.dataMap = jsonreply;
    serverResponse.responseMessage = response;
    this->receivedReply = true;
    loop.exit(0);
}
//! [1]
