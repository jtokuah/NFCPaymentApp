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
#ifndef NFCWORKER_HPP_
#define NFCWORKER_HPP_

#define CHECK(rc) checkReturnCode((rc), __LINE__, __FILE__, __PRETTY_FUNCTION__)

/*
 * Macros for bit manipulation of Amsterdam Travel Pass Card
 */
#define EXTRACT_CNTR(__x) (((__x) >> 12 ) & 0x7fff)
#define EXTRACT_LOCN(__x) (((__x) >>  0 ) & 0x0fff)
#define EXTRACT_TYPE(__x) (((__x) >> 29 ) & 0x0007)
#define EXTRACT_DAYS(__x) (((__x) >> 15 ) & 0x3fff)
#define EXTRACT_MINS(__x) (((__x) >>  4 ) & 0x03ff)

#define EOK 0;

#include <QtCore/QObject>
#include <QMutex>
#include <QVariantMap>
#include <bb/cascades/QmlDocument>
#include <bps/event.h>
#include <nfc/nfc.h>
#include "NdefType.hpp"
#include "EventLog.hpp"

/* Outgoing transaction message codes sent to the mobile device */
	typedef enum{
		OUT_CODE_INVALID = -1,
		OUT_CODE_MESSAGE_ACK = 0,
		OUT_CODE_PEER_DEVICE_READY_RESP = 1,
		OUT_CODE_PAYMENT_AMOUNT_RECEIVED_CONF = 2,
		OUT_CODE_ACCT_NUM_RECEIVED_CONF = 3,
	    OUT_CODE_SERVER_CONNECTION_SUCCESS = 4,
	    OUT_CODE_SERVER_CONNECTION_FAILED = 5,
	    OUT_CODE_AUTHENTICATION_SUCCESS = 6,
	    OUT_CODE_AUTHENTICATION_FAILED = 7,
	    OUT_CODE_INSUFF_FUNDS_RESULT = 8,
	    OUT_CODE_TRANSACTION_SUCCESS = 9,
	    OUT_CODE_TRANSACTION_FAILED = 10,
	    OUT_CODE_VERIFYING = 11,
	    OUT_CODE_READY_FOR_BALANCE_REQ = 12,
	    OUT_CODE_PAYMENT_AMOUNT_INVALID = 13,
	    OUT_CODE_ACCT_NUM_INVALID = 14,
	    OUT_CODE_CONNECTING_TO_SERVER = 15,
	    OUT_CODE_AUTHENTICATING = 16,
	    OUT_MESSAGE_NOT_SENT = 17,
	    //all new codes should be placed above this line
	    OUT_CODE_MAX
	}debitMachineOutgoingCodeType;

	/* Incoming transaction message codes receive from the mobile device */
	typedef enum{
		IN_CODE_INVALID = -1,
		IN_CODE_MESSAGE_ACK = 0,
		IN_CODE_PEER_READY_REQ = 1,
		IN_CODE_TRANSACTION_ID_RECEIVED_CONF = 2,
		IN_CODE_TRY_AGAIN_REQ = 3,
		IN_CODE_READY_FOR_RECEIPT_RESP = 4,
		IN_CODE_RECEIPT_VALID_MESSAGE = 5,
		IN_CODE_RECEIPT_INVALID_MESSAGE = 6,
		IN_CODE_READY_FOR_BALANCE_RESP = 7,
		IN_CODE_BALANCE_RECEIVED_CONF = 8,
		IN_CODE_SENDING_PAYMENT_AMOUNT = 9,
		IN_CODE_SENDING_MERCHANT_ACCT_NUM = 10,
		IN_CODE_SERVER_CONNECTION_STATUS_REQ = 11,
		IN_CODE_AUTH_STATUS_REQ = 12,
		IN_CODE_VERIFICATION_STATUS_REQ = 13,
		//all new codes should be placed above this line
		IN_CODE_MAX
	}debitMachineIncomingCodeType;

	/* Internal debit machine transaction error codes */
	typedef enum{
		ERR_NO_ERROR = 0,
		ERR_UNDETERMINED,
		ERR_UNKNOWN,
		ERR_MESSAGE_NOT_SENT,
	}debitMachineErrorCodeType;

	/*table structure to map the outgoing message code strings to the corresponding
	 * internal enumerated type
	 */
	typedef struct {
		debitMachineOutgoingCodeType code;
		char* message;
	}debitMachineTransactionTableEntry;

	/* Structure of messages exchanged with the mobile device */
	typedef struct debitMachineMessageType{
		int transactionCode;
		QString text;
		int data;
	}debitMachineMessageType;

class NfcWorker: public QObject {

	Q_OBJECT

public:
	virtual ~NfcWorker();

	enum CustomEventType {
		TERMINATE, WAKEUP
	};

	enum TaskToPerform_t {
		NONE_SET,
		READ_NDEF_TAG,
		WRITE_URI_TAG,
		WRITE_TEXT_TAG,
		WRITE_SP_TAG,
		WRITE_CUSTOM_TAG,
		READ_ISO15693,
		WRITE_ISO15693,
		SEND_VCARD,
		EMULATE_TAG,
		EMULATE_ECHO,
		CARD_APDU_EXCHANGE,
		READ_GVB,
		READ_TAG_DETAILS
	};



signals:
	void clearMessages();
	void stopped(const QVariant &message);
	void started(const QVariant &message);
	void event_log_needed();
	void message(const QVariant &message);

public slots:
	void startEventLoop();
	void initialize();
	void reset();
	void listen();
	void interruptBpsWaitLoop(unsigned int code);
	void prepareToReadNdefTagViaInvoke();
	void prepareToWriteNdefUriTag(const QVariant &uri);
	void prepareToWriteNdefTextTag(const QVariant &text);
	void prepareToWriteNdefSpTag(const QVariant &sp_uri,
			const QVariant &sp_text);
	void prepareToWriteNdefCustomTag(const QVariant &domain,
			const QVariant &type, const QVariant &payload);
	void prepareToSendVcard(const QVariant &first_name,
			const QVariant &last_name, const QVariant &address,
			const QVariant &email, const QVariant &mobile);
	void prepareToEmulateTag(const QVariant &the_uri, const QVariant &the_text);
	void prepareToEmulateEcho();
	void prepareToStopEmulation();
	void writeUriTag(const QVariant &uri);
	void writeSpTag(const QVariant &sp_uri, const QVariant &sp_text);
	void writeTextTag(const QVariant &text);
	void writeCustomTag(const QVariant &domain, const QVariant &type,
			const QVariant &payload);
	void sendVcard(const QVariant &first_name, const QVariant &last_name,
			const QVariant &address, const QVariant &email,
			const QVariant &mobile);
	void emulateTag(const QVariant &uri, const QVariant &text);
	void emulateEcho();
	void doIso7816Test(const QVariant &aid, bool select_only,  const QVariant &hex_cla, const QVariant &hex_ins, const QVariant &hexp1p2, const QVariant &hex_lc,
			const QVariant &hex_command, const QVariant &hex_le);
	void exchangeApduWithCard(bps_event_t *event);
	void prepIso7816CardTest(const QVariant &aid, bool select_only,  const QVariant &hex_cla, const QVariant &hex_ins, const QVariant &hexp1p2, const QVariant &hex_lc,
			const QVariant &hex_command, const QVariant &hex_le);
	void prepareToDoIso15693Read();
	void prepareToDoIso15693Write(const QVariant &data);
	void readIso15693();
	void writeIso15693(const QVariant &data);
	void stopEmulatingTag();
	void readGvb();
	void prepareToDoGvbRead();
	void readTagDetails();
	void prepareToReadTagDetails();

public:
	static NfcWorker* getInstance();
	NfcWorker(QObject *parent = 0);
	void readTag();
	void handleTagReadInvocation(const QByteArray data);
	void emitMessage(QString text);

private:
	void handleNavigatorEvent(bps_event_t *event);
	void handleNfcEvent(bps_event_t *event);
	void handleNfcReadNdefTagEvent(bps_event_t *event);
	void handleNfcWriteCustomTagEvent(bps_event_t *event);
	void handleNfcWriteSpTagEvent(bps_event_t *event);
	void handleNfcWriteTextTagEvent(bps_event_t *event);
	void handleNfcWriteUriTagEvent(bps_event_t *event);
	void handleIso15693TagEvent(bps_event_t *event);
	void handleGvbEvent(bps_event_t *event);
	void handleReadTagDetailsEvent(bps_event_t *event);
	void handleSendVcardEvent(bps_event_t *event);
	void handleEmulateNfcEvent(bps_event_t *event);
	void handleEmulateEchoEvent(bps_event_t *event);
	debitMachineMessageType debitMachineListener(nfc_target_t *target);
	bool debitMachineResponder(int code, const char * text, int data);
	void handlePaymentRequest(nfc_target_t *target);
	void processIso144434EchoCommandEvent(nfc_target_t *target);
	void parseNdefMessage(nfc_ndef_message_t *ndefMessage);
	int exchangeApdu(uchar_t* the_apdu, int apdu_size, nfc_target_t* target);
	int selectByAID(uchar_t* the_aid, int aid_size, nfc_target_t* target);
	int miscCommand(uchar_t* the_command, int cmd_size, nfc_target_t* target);
	nfc_ndef_record_t* makeUriRecord(uchar_t prefix, QString uri);
	nfc_ndef_record_t* makeTextRecord(QString language, QString text);
	nfc_ndef_record_t* makeSpRecord();
	nfc_ndef_record_t* makeCustomRecord(QString domain, QString type,
			QString text);
	nfc_ndef_record_t* makeVcardMessage(QString name, QString address,
			QString email, QString mobile);
	nfc_ndef_record_t* makeMediaRecord(QString type, QString text);
	void checkReturnCode(int rc, int line, const char *file,
			const char *func);
	unsigned long getSysTimeMs();
	void displayTagInformation(nfc_target_t* target, bool display_ndef_details);

	static NfcWorker* _instance;
	const int BPS_EVENT_TIMEOUT;
	int _bpsInterruptDomain;
	int _bpsChannel;
	bool _failedToInitialize;
	bool _timeToDie;
	QMutex _interruptMutex;
	TaskToPerform_t _taskToPerform;
	bool _navigatorExitReceived;
	nfc_ndef_message_t *_emulateNdefMessage;

	QString _ndefUri;
	QString _ndefText;
	QString _ndefSpUri;
	QString _ndefSpText;
	QString _ndefDomain;
	QString _ndefType;
	QString _ndefPayload;
	QString _first_name;
	QString _last_name;
	QString _address;
	QString _email;
	QString _mobile;
	QString _aid;
	bool _select_only;
	QString _target;
	QString _hex_cla;
	QString _hex_ins;
	QString _hexp1p2;
	QString _hex_lc;
	QString _hex_command;
	QString _hex_le;
	QString _data;
	EventLog* _eventLog;
};


#endif /* NFCWORKER_HPP_ */
