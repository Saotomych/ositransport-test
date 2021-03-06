#ifndef OSITRANSPORT_H
#define OSITRANSPORT_H

#define UNITTEST

#include <QCoreApplication>

#include <cppunit/TestCase.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/XmlOutputterHook.h>
#include <cppunit/XmlOutputter.h>

#include "ositransport_global.h"
#include "servertsap.h"
#include "clienttsap.h"
#include "connection.h"
#include "connectionlistener.h"
#include "socketfactory.h"

#include <QTimer>
#include <QEventLoop>
#include <QVector>

class OsiTransportTest: public QObject
{

	Q_OBJECT

	OsiTransportTest(QObject *parent = 0) :
		QObject(parent),
		pServer(nullptr),
		pClient(nullptr),
		pConnection(nullptr),
		pConnectionListener(nullptr),
		checkClientConnected(false),
		checkClientErrorConnected(false),
		checkClientErrorTransfer(false),
		checkServerErrorTransfer(false),
		checkServerConnected(false),
		checkServerErrorConnected(false),
		checkIllegalArg(false),
		checkIllegalClassMbr(false),
		test1(nullptr),
		test2(nullptr),
		test3(nullptr)
	{}

public:

	CServerTSAP* pServer;
	CClientTSAP* pClient;
	CConnection* pConnection;
	CConnectionListener* pConnectionListener;

	bool checkClientConnected;
	bool checkClientErrorConnected;
	bool checkClientErrorTransfer;
	bool checkServerErrorTransfer;
	bool checkServerConnected;
	bool checkServerTransportConnected;
	bool checkServerErrorConnected;
	bool checkIllegalArg;
	bool checkIllegalClassMbr;

	QByteArray m_serverRcvData;
	QByteArray m_clientRcvData;

	static const char testData[];

	static OsiTransportTest* getMainTest(QObject *parent = 0) {
		static OsiTransportTest* pthis = nullptr;
		if (pthis == nullptr)
		{
			if (parent)
				pthis = new OsiTransportTest(parent);
			else
				throw std::invalid_argument("OsiTransportTest* getMainTest: QObject is nullptr when singletone constructed");
		}
		return pthis;
	}

	// Start of server and client in QThreads
	class CServer: public QThread
	{
		OsiTransportTest* m_test;

	public:
		CServer(OsiTransportTest *test): m_test(test) {}

		void run()
		{
		    QObject::connect(m_test, SIGNAL(finished()), this, SLOT(quit()));

		    m_test->startServer();

			this->exec();
		}
	};

	class CClient: public QThread
	{
		OsiTransportTest* m_test;

	public:
		CClient(OsiTransportTest *test): m_test(test){}

		void run()
		{
		    QObject::connect(m_test, SIGNAL(finished()), this, SLOT(quit()));

		    m_test->startClient();

			this->exec();
		}
	};

	// Test Classes
	/*
	 *  Class tests creation of connection client-server
	 */
	class Test1:public CppUnit::TestCase
	{
	public:
		Test1(const std::string str): TestCase(str) {}
		void runTest();
	};

	/*
	 *  Class tests data sending from client to server
	 */
	class Test2:public CppUnit::TestCase
	{
	public:
		Test2(const std::string str): TestCase(str) {}
		void runTest();
	};

	/*
	 *  Class tests data receiving from server to client
	 */
	class Test3:public CppUnit::TestCase
	{
	public:
		Test3(const std::string str): TestCase(str) {}
		void runTest();
	};

	Test1*	test1;
	Test2*	test2;
	Test3*	test3;

public slots:

	// server slots
	void slotServerClientConnected(const CConnection* that);
	void slotServerClientDisconnected(const CConnection* that);
	void slotServerTSduReady(const CConnection* that);
	void slotServerCRReady(const CConnection* that);
	void slotServerIOError(QString str);

	// client slots
	void slotConnectionReady(const CConnection* that);
	void slotConnectionClosed(const CConnection* that);
	void slotClientTSduReady(const CConnection* that);
	void slotClientIOError(QString str);

	// Client Errors
	void slotIllegalArgument(QString strErr);
	void slotConnectError(QString strErr);
	void slotIllegalClassMember(QString strErr);

    void prepare();
    void run();
	void startServer();
	void startClient();

	void sendTestData(CConnection* that);

signals:
    void finished();

    void signalConnectAnswer(const CConnection*);
};

#endif // OSITRANSPORT_H

