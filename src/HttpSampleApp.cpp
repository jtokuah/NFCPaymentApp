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

#include <bb/cascades/Application>
#include <bb/cascades/QmlDocument>
#include <bb/cascades/AbstractPane>
#include <QSettings>
#include <qDebug>
#include <ctime>

#include "HttpSampleApp.hpp"
#include "RequestHeaders.hpp"
#include "PostHttp.hpp"
#include "AppSettings.hpp"

using namespace bb::cascades;

/**
 * HttpSampleApp
 *
 * In this class you will learn the following:
 * -- Setup Organization and Application name to use QSettings
 * -- Register C++ classes for use in QML documents
 */

/**
 * HttpSampleApp::HttpSampleApp()
 *
 * Initial setup for your App
 * Setting up the PostHttp, ExternalIP and RequestHeaders classes for use as a context in QML
 * Create initial root Pane
 */
//! [0]
HttpSampleApp* HttpSampleApp::_instance;

HttpSampleApp::HttpSampleApp()/* : _postHttp(0), _requestHeaders(0)*/
{
	_postHttp = PostHttp::getInstance();
	_requestHeaders = RequestHeaders::getInstance();
}
//! [0]
HttpSampleApp* HttpSampleApp::getInstance() {
	if (_instance == 0) {
		_instance = new HttpSampleApp;
	}
	return _instance;
}

void HttpSampleApp::setPostBody(const QString &body)
{
    if (m_postBody == body)
        return;

    m_postBody = body;
    emit postBodyChanged();
}

QString HttpSampleApp::postBody() const
{
    return m_postBody;
}
//! [1]
void HttpSampleApp::setUseHttps(bool value)
{
    if (AppSettings::isUsingHttps() == value)
        return;

    AppSettings::setHttps(value);
    emit useHttpsChanged();
}

bool HttpSampleApp::useHttps() const
{
    return AppSettings::isUsingHttps();
}

serverResponseType HttpSampleApp::messageServer(QString &command, QString &body)
{
	qDebug() << "XXXX HttpSampleApp::messageServer" ;

	serverResponseType response;
	if (command == "GET"){
		qDebug() << "XXXX HttpSampleApp::messageServer - sending 'GET' request..." ;
		_requestHeaders->getRequest(body);
		qDebug() << "XXXX HttpSampleApp::messageServer - Sending 'GET' request" ;
		while(true){
			if ((_requestHeaders->receivedReply)==true){
				response = _postHttp->serverResponse;
				break;
			}
			else {
				continue;
			}
		}
	};
	if (command == "POST"){
		qDebug() << "XXXX HttpSampleApp::messageServer - sending 'POST' request..." ;
		response = _postHttp->post(body);
	};
	return response;
}
//! [1]

