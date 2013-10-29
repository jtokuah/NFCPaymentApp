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

#ifndef REQUESTHEADERS_HPP
#define REQUESTHEADERS_HPP

#include <QtCore/QObject>
#include <QtCore>

class QNetworkAccessManager;


class RequestHeaders : public QObject
{
    Q_OBJECT

private:
    static RequestHeaders* _instance;

public:
    RequestHeaders(QObject* parent = 0);
    static RequestHeaders* getInstance();
	bool receivedReply;
	QMap<QString, QVariant> jsonreply;

public Q_SLOTS:
    void getRequest(QString &body);

Q_SIGNALS:
    void complete(const QString &info);

private Q_SLOTS:
    void onGetReply();

private:
    QNetworkAccessManager* m_networkAccessManager;
};

#endif
