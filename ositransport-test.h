#include <QCoreApplication>

#ifndef OSITRANSPORT_H
#define OSITRANSPORT_H

#define UNITTEST

#include <cppunit/TestCase.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/XmlOutputterHook.h>
#include <cppunit/XmlOutputter.h>

#include "../ositransport/ositransport_global.h"
#include "../ositransport/servertsap.h"
#include "../ositransport/clienttsap.h"
#include "../ositransport/connection.h"
#include "../ositransport/connectionlistener.h"
#include "../ositransport/socketfactory.h"

#include <QTimer>
#include <QEventLoop>

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
		checkServerConnected(false),
		checkServerErrorConnected(false),
		checkIllegalArg(false),
		checkIllegalClassMbr(false)
	{}

public:

	CServerTSAP* pServer;
	CClientTSAP* pClient;
	CConnection* pConnection;
	CConnectionListener* pConnectionListener;

	bool checkClientConnected;
	bool checkClientErrorConnected;
	bool checkServerConnected;
	bool checkServerErrorConnected;
	bool checkIllegalArg;
	bool checkIllegalClassMbr;

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

//			QTimer::singleShot(0, m_test, SLOT(startServer()));
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

//			QTimer::singleShot(500, m_test, SLOT(startClient()));

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
	void slotClientConnected(const CConnection* that);
	void slotClientDisconnected(const CConnection* that);
	void slotServerTSduReady(const CConnection* that);
	void slotServerCRReady(const CConnection* that);
	void slotServerIOError(QString str);

	// client slots
	void slotConnectionReady(const CConnection* that);
	void slotConnectionClosed(const CConnection* that);
	void slotTSduReady(const CConnection* that);
	void slotIOError(QString str);

	// Client Errors
	void slotIllegalArgument(QString strErr);
	void slotConnectError(QString strErr);
	void slotIllegalClassMember(QString strErr);

    void prepare();
    void run();
	void startServer();
	void startClient();

signals:
    void finished();
};

#endif // OSITRANSPORT_H

