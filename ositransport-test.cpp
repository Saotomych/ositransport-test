#include "ositransport-test.h"

const char OsiTransportTest::testData[] = {
						(char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f, (char) 0x00, (char) 0x01, (char) 0x02, (char) 0x03, (char) 0x04, (char) 0x05, (char) 0x06,
						(char) 0x07, (char) 0x08, (char) 0x09, (char) 0x0a, (char) 0x0b, (char) 0x0c, (char) 0x0d, (char) 0x0e,
						(char) 0x0f
};

void OsiTransportTest::startServer()
{
	OsiTransportTest* pTest = OsiTransportTest::getMainTest();

	pTest->checkClientConnected = false;
	pTest->checkClientErrorConnected = false;
	pTest->checkServerConnected = false;
	pTest->checkServerErrorConnected = false;
	pTest->checkIllegalArg = false;
	pTest->checkIllegalClassMbr = false;

	// Create server and start listening
	qint32 port = 18982;
	pTest->pServer = new CServerTSAP(port);
	pTest->pServer->setMessageTimeout(500);
	pTest->pServer->setMessageFragmentTimeout(500);
	pTest->pConnectionListener = pTest->pServer->createServer();

	// server slots
	pTest->connect(pTest->pConnectionListener, SIGNAL(signalConnected(const CConnection*)), pTest, SLOT(slotClientConnected(const CConnection*)));
	pTest->connect(pTest->pConnectionListener, SIGNAL(signalDisconnected(const CConnection*)), pTest, SLOT(slotClientDisconnected(const CConnection*)));
	pTest->connect(pTest->pConnectionListener, SIGNAL(signalTSduReady(const CConnection*)), pTest, SLOT(slotServerTSduReady(const CConnection*)));
	pTest->connect(pTest->pConnectionListener, SIGNAL(signalCRReady(const CConnection*)), pTest, SLOT(slotServerCRReady(const CConnection*)));
	pTest->connect(pTest->pConnectionListener, SIGNAL(signalIOError(QString)), pTest, SLOT(slotServerIOError(QString)));

	pTest->pServer->startListening();

}

void OsiTransportTest::startClient()
{
	OsiTransportTest* pTest = OsiTransportTest::getMainTest();

	// Create client and start connection
	pTest->pClient = new CClientTSAP(*CSocketFactory::getSocketFactory());

	// client's error slots
	pTest->connect(pTest->pClient, SIGNAL(signalIllegalArgument(QString)), pTest, SLOT(slotIllegalArgument(QString)));
	pTest->connect(pTest->pClient, SIGNAL(signalConnectError(QString)), pTest, SLOT(slotConnectError(QString)));
	pTest->connect(pTest->pClient, SIGNAL(signalIllegalClassMember(QString)), pTest, SLOT(slotIllegalClassMember(QString)));

	pTest->pClient->setMaxTPDUSizeParam(7);
	pTest->pClient->setMessageTimeout(1000);
	pTest->pClient->setMessageFragmentTimeout(1000);

	QHostAddress address("127.0.0.1");
	qint32 port = 18982;

	pTest->pConnection = pTest->pClient->createConnection(address, port);

	// connection slots
	pTest->connect(pTest->pConnection, SIGNAL(signalConnectionReady(const CConnection*)), pTest, SLOT(slotConnectionReady(const CConnection*)));
	pTest->connect(pTest->pConnection, SIGNAL(signalConnectionClosed(const CConnection*)), pTest, SLOT(slotConnectionClosed(const CConnection*)));
	pTest->connect(pTest->pConnection, SIGNAL(signalTSduReady(const CConnection*)), pTest, SLOT(slotTSduReady(const CConnection*)));
	pTest->connect(pTest->pConnection, SIGNAL(signalIOError(QString)), pTest, SLOT(slotIOError(QString)));

	pConnection->startConnection();

}

void OsiTransportTest::Test1::runTest()
{
	OsiTransportTest* pTest = OsiTransportTest::getMainTest();

	CPPUNIT_ASSERT_EQUAL_MESSAGE("Test1: checkClientConnected wrong", true, pTest->checkClientConnected);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Test1: checkClientErrorConnected wrong", false, pTest->checkClientErrorConnected);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Test1: checkServerConnected wrong", true, pTest->checkServerConnected);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Test1: checkServerErrorConnected wrong", false, pTest->checkServerErrorConnected);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Test1: checkIllegalArg wrong", false, pTest->checkIllegalArg);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Test1: checkIllegalClassMbr wrong", false, pTest->checkIllegalClassMbr);
}

void OsiTransportTest::Test2::runTest()
{
	OsiTransportTest* pTest = OsiTransportTest::getMainTest();

}

void OsiTransportTest::Test3::runTest()
{
	OsiTransportTest* pTest = OsiTransportTest::getMainTest();

}

// server slots
void OsiTransportTest::slotClientConnected(const CConnection* that)
{
	qDebug() << "OsiTransportTest::slotClientConnected";

	checkServerConnected = true;
}

void OsiTransportTest::slotClientDisconnected(const CConnection* that)
{
	qDebug() << "OsiTransportTest::slotClientDisconnected";

	checkServerConnected = false;
}

void OsiTransportTest::slotServerTSduReady(const CConnection* that)
{
	qDebug() << "OsiTransportTest::slotServerTSduReady";

}

void OsiTransportTest::slotServerCRReady(const CConnection* that)
{
	qDebug() << "OsiTransportTest::slotServerCRReady";

}

void OsiTransportTest::slotServerIOError(QString str)
{
	qDebug() << "OsiTransportTest::slotServerIOError: " << str;

	checkClientErrorConnected = true;
}

// client slots
void OsiTransportTest::slotConnectionReady(const CConnection* that)
{
	qDebug() << "OsiTransportTest::slotConnectionReady";

	checkClientConnected = true;

}

void OsiTransportTest::slotConnectionClosed(const CConnection* that)
{
	qDebug() << "OsiTransportTest::slotConnectionClosed";

	checkClientConnected = false;
}

void OsiTransportTest::slotTSduReady(const CConnection* that)
{
	qDebug() << "OsiTransportTest::slotTSduReady";

}

void OsiTransportTest::slotIOError(QString str)
{
	qDebug() << "OsiTransportTest::slotIOError: " << str;

	checkClientErrorConnected = true;
}

// Client Errors
void OsiTransportTest::slotIllegalArgument(QString strErr)
{
	qDebug() << "OsiTransportTest::slotIllegalArgument: " << strErr;

	checkIllegalArg = true;
}

void OsiTransportTest::slotConnectError(QString strErr)
{
	qDebug() << "OsiTransportTest::slotConnectError: " << strErr;

	checkClientErrorConnected = true;
}

void OsiTransportTest::slotIllegalClassMember(QString strErr)
{
	qDebug() << "OsiTransportTest::slotIllegalClassMember: " << strErr;

	checkIllegalClassMbr = true;
}

void OsiTransportTest::prepare()
{

	test1 = new OsiTransportTest::Test1("Connection test");
	test2 = new OsiTransportTest::Test2("Send test");
	test3 = new OsiTransportTest::Test3("Receive test");

	CServer* srv = new CServer(this);
	CClient* clt = new CClient(this);

	srv->start();
	clt->start();

}

void OsiTransportTest::run()
{
    // Do processing here

	CppUnit::TextTestRunner runner;
	runner.addTest(test1);

	qDebug() << "Test 1 running";
	runner.run();

	std::ofstream outFile("testResult.xml");
	CppUnit::XmlOutputter outputer(&runner.result(), outFile);
	outputer.write();

	emit finished();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    OsiTransportTest *test = OsiTransportTest::getMainTest(&a);

    QObject::connect(test, SIGNAL(finished()), &a, SLOT(quit()));

    QTimer::singleShot(0, test, SLOT(prepare()));
    QTimer::singleShot(5000, test, SLOT(run()));

    return  a.exec();
}
