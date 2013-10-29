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

#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QSslConfiguration>
#include <QUrl>
#include <QtCore/QObject>

#include "RequestHeaders.hpp"

RequestHeaders* RequestHeaders::_instance;


/**
 * RequestHeaders
 *
 * In this class you will learn the following:
 * -- How to use QNetworkAccessManager to make a network request
 * -- How to setup a secure connection with QSslConfiguration
 * -- How to read a network response with QNetworkReply
 * -- How to parse JSON data using JsonDataAccess
 * -- How to read the headers in an http response
 */

RequestHeaders::RequestHeaders(QObject* parent)
    : QObject(parent)
    , m_networkAccessManager(new QNetworkAccessManager(this))
{
}

RequestHeaders* RequestHeaders::getInstance() {
	if (_instance == 0) {
		_instance = new RequestHeaders;
	}
	bool receivedReply;
	QMap<QString, QVariant> jsonreply;
	return _instance;
}

/**
 * RequestHeaders::getRequest()
 *
 * Setup an http get request using SSL if configured
 */
//! [0]
void RequestHeaders::getRequest(QString &body)
{
    //const QUrl url("http://httpbin.org/get");
    //const QUrl url("http://quattrozhou.vicp.cc");
	QUrl url("http://paymentserver.dynu.com");

    QNetworkRequest request(url);

    if (AppSettings::isUsingHttps()) {
        //request.setUrl(QUrl("https://httpbin.org/get"));
        //request.setUrl(QUrl("https://quattrozhou.vicp.cc"));
        request.setUrl(QUrl("https://paymentserver.dynu.com"));

        QSslConfiguration config = request.sslConfiguration();
        config.setPeerVerifyMode(QSslSocket::VerifyNone);
        config.setProtocol(QSsl::TlsV1);
        request.setSslConfiguration(config);

    }

    QNetworkReply* reply = m_networkAccessManager->get(request);
    bool ok = connect(reply, SIGNAL(finished()), this, SLOT(onGetReply()));
    Q_ASSERT(ok);
    Q_UNUSED(ok);
}
//! [0]

/**
 * RequestHeaders::onGetReply()
 *
 * SLOT
 * Handles the http response by parsing JSON and printing out the response http headers
 */
//! [1]
void RequestHeaders::onGetReply()
{
    QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());

    QString response;
    if (reply) {
    	qDebug() << "Got reply";
        if (reply->error() == QNetworkReply::NoError) {
            const int available = reply->bytesAvailable();

            if (available > 0) {
                const QByteArray buffer(reply->readAll());
                qDebug() << "bytes available: " << available;

                bb::data::JsonDataAccess ja;
                const QVariant jsonva = ja.loadFromBuffer(buffer);
                if (ja.hasError()){
                	qDebug() <<"JsonDataAccess Error:" << ja.error().errorMessage();
                }
                jsonreply = jsonva.toMap();
                qDebug() << "response: \n" << jsonva.toString();

                QMap<QString, QVariant>::const_iterator it;

                // Locate the header array
                it = jsonreply.find("headers");
                if (it != jsonreply.end()) {
                	qDebug() << "found headers";
                    // Print everything in header array
                    const QMap<QString, QVariant> headers = it.value().toMap();
                    response += "Headers: \n";
                    for (QMap<QString, QVariant>::const_iterator hdrIter = headers.begin(); hdrIter != headers.end(); ++hdrIter) {
                        if (hdrIter.value().toString().trimmed().isEmpty())
                            continue; // Skip empty values

                        response += QString::fromLatin1("%1: %2\r\n").arg(hdrIter.key(), hdrIter.value().toString());
                    }
                }
                else qDebug() << "did not find headers";

                // Locate the body array
				it = jsonreply.find("transactions");
				if (it != jsonreply.end()) {
					qDebug() << "found transactions";
					// Print everything in body array
					const QMap<QString, QVariant> transactions = it.value().toMap();
					response += "\ntransactions: ";
					for (QMap<QString, QVariant>::const_iterator transIter = transactions.begin(); transIter != transactions.end(); ++transIter) {
						if (transIter.value().toString().trimmed().isEmpty())
							continue; // Skip empty values

						response += QString::fromLatin1("%1: %2\r\n").arg(transIter.key(), transIter.value().toString());
					}
				}
				else qDebug() << "did not find transactions";

                // Print everything else
                for (it = jsonreply.begin(); it != jsonreply.end(); it++) {
                    if (it.value().toString().trimmed().isEmpty())
                        continue;  // Skip empty values

                    response += QString::fromLatin1("%1: %2\r\n").arg(it.key(), it.value().toString());
                }
            }

        } else {
            response =  tr("Error: %1 status: %2").arg(reply->errorString(), reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toString());
            qDebug() << response;
        }

        receivedReply = true;
        reply->deleteLater();
    }

    if (response.trimmed().isEmpty()) {
        response = tr("Unable to retrieve request headers");
    }

    emit complete(response);
}
//! [1]
