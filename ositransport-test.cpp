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

	pTest->checkServerConnected = false;
	pTest->checkServerErrorConnected = false;
	pTest->checkServerErrorTransfer = false;
	pTest->checkIllegalArg = false;
	pTest->checkIllegalClassMbr = false;

	// Create server and start listening
	qint32 port = 18982;
	pTest->pServer = new CServerTSAP(port);
	pTest->pServer->setMessageTimeout(500);
	pTest->pServer->setMessageFragmentTimeout(500);
	pTest->pConnectionListener = pTest->pServer->createServer();

	// server slots
	pTest->connect(pTest->pConnectionListener, SIGNAL(signalConnected(const CConnection*)), pTest, SLOT(slotServerClientConnected(const CConnection*)));
	pTest->connect(pTest->pConnectionListener, SIGNAL(signalDisconnected(const CConnection*)), pTest, SLOT(slotServerClientDisconnected(const CConnection*)));
	pTest->connect(pTest->pConnectionListener, SIGNAL(signalTSduReady(const CConnection*)), pTest, SLOT(slotServerTSduReady(const CConnection*)));
	pTest->connect(pTest->pConnectionListener, SIGNAL(signalCRReady(const CConnection*)), pTest, SLOT(slotServerCRReady(const CConnection*)));
	pTest->connect(pTest->pConnectionListener, SIGNAL(signalIOError(QString)), pTest, SLOT(slotServerIOError(QString)));

	pTest->pServer->startListening();

}

void OsiTransportTest::startClient()
{
	OsiTransportTest* pTest = OsiTransportTest::getMainTest();

	pTest->checkClientConnected = false;
	pTest->checkClientErrorConnected = false;
	pTest->checkClientErrorTransfer = false;

	// Create client and start connection
	pTest->pClient = new CClientTSAP(*CSocketFactory::getSocketFactory());

	// client's error slots
	pTest->connect(pTest->pClient, SIGNAL(signalIllegalArgument(QString)), pTest, SLOT(slotIllegalArgument(QString)));
	pTest->connect(pTest->pClient, SIGNAL(signalConnectError(QString)), pTest, SLOT(slotConnectError(QString)));
	pTest->connect(pTest->pClient, SIGNAL(signalIllegalClassMember(QString)), pTest, SLOT(slotIllegalClassMember(QString)));

	pTest->pClient->setMaxTPDUSizeParam(7);
	pTest->pClient->setMessageTimeout(5000);
	pTest->pClient->setMessageFragmentTimeout(5000);

	QHostAddress address("127.0.0.1");
	qint32 port = 18982;

	pTest->pConnection = pTest->pClient->createConnection(address, port);

	// connection slots
	pTest->connect(pTest->pConnection, SIGNAL(signalConnectionReady(const CConnection*)), pTest, SLOT(slotConnectionReady(const CConnection*)));
	pTest->connect(pTest->pConnection, SIGNAL(signalConnectionClosed(const CConnection*)), pTest, SLOT(slotConnectionClosed(const CConnection*)));
	pTest->connect(pTest->pConnection, SIGNAL(signalTSduReady(const CConnection*)), pTest, SLOT(slotClientTSduReady(const CConnection*)));
	pTest->connect(pTest->pConnection, SIGNAL(signalIOError(QString)), pTest, SLOT(slotClientIOError(QString)));

	pConnection->startConnection();

}

void OsiTransportTest::sendTestData(CConnection* that)
{
	QByteArray qdata;
	qdata.reserve(sizeof(testData)/sizeof(testData[0]));
	for (char c: testData)
	{
		qdata.push_back(c);
	}

	that->send(qdata, (quint32)0, qdata.size());
}

void OsiTransportTest::Test1::runTest()
{
	qDebug() << "Test1: Check connection";

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
	qDebug() << "Test2: Check server side received data";

	OsiTransportTest* pTest = OsiTransportTest::getMainTest();

	CPPUNIT_ASSERT_EQUAL_MESSAGE("Test2: Server side has error transfer", false, pTest->checkServerErrorTransfer);

	qint32 expectedSize = sizeof(testData)/sizeof(testData[0]);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Test2: Check server size of received data wrong", expectedSize, pTest->m_serverRcvData.size());

	QByteArray::Iterator dataIt = pTest->m_serverRcvData.begin();
	for (char c: testData)
	{
		CPPUNIT_ASSERT_EQUAL_MESSAGE("Test2: Check server side received data wrong", c, *dataIt);
		dataIt++;
	}

}

void OsiTransportTest::Test3::runTest()
{
	qDebug() << "Test3: Check client side received data";

	OsiTransportTest* pTest = OsiTransportTest::getMainTest();

	CPPUNIT_ASSERT_EQUAL_MESSAGE("Test3: Client side has error transfer", false, pTest->checkClientErrorTransfer);

	qint32 expectedSize = sizeof(testData)/sizeof(testData[0]);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Test3: Check client size of received data wrong", expectedSize, pTest->m_clientRcvData.size());

	QByteArray::Iterator dataIt = pTest->m_clientRcvData.begin();
	for (char c: testData)
	{
		CPPUNIT_ASSERT_EQUAL_MESSAGE("Test3: Check client side received data wrong", c, *dataIt);
		dataIt++;
	}

}

// server slots
void OsiTransportTest::slotServerClientConnected(const CConnection* pconn)
{
	qDebug() << "OsiTransportTest::slotServerClientConnected";

	(const_cast<CConnection*>(pconn))->listenForCR();

	checkServerConnected = true;
}

void OsiTransportTest::slotServerClientDisconnected(const CConnection*)
{
	qDebug() << "OsiTransportTest::slotServerClientDisconnected";

	checkServerConnected = false;
}

void OsiTransportTest::slotServerTSduReady(const CConnection* pConnection)
{

	qDebug() << "OsiTransportTest::slotServerTSduReady, checkServerConnected = " << checkServerConnected;

	if (checkServerConnected)
	{

		CConnection* myconn = const_cast<CConnection*>(pConnection);

		if ( myconn->receive(m_serverRcvData) == true)
		{
			qDebug() << "OsiTransportTest::slotServerTSduReady: server data ready";

			// Обработка данных и сброс буфера по окончании
			OsiTransportTest* pTest = OsiTransportTest::getMainTest();

			pTest->sendTestData(myconn);
		}
		else
		{
			qDebug() << "OsiTransportTest::slotServerTSduReady: server data is still not ready";
		}
	}

}

void OsiTransportTest::slotServerCRReady(const CConnection* pconn)
{
	qDebug() << "OsiTransportTest::slotServerCRReady";

	pconn->asyncReadWriteInit();
}

void OsiTransportTest::slotServerIOError(QString str)
{
	qDebug() << "OsiTransportTest::slotServerIOError: " << str;

	checkServerErrorTransfer = true;
}

// client slots
void OsiTransportTest::slotConnectionReady(const CConnection* pconn)
{
	qDebug() << "OsiTransportTest::slotConnectionReady";

	pconn->asyncReadWriteInit();

	checkClientConnected = true;

	OsiTransportTest* pTest = OsiTransportTest::getMainTest();

	pTest->sendTestData( const_cast<CConnection*>(pconn) );
}

void OsiTransportTest::slotConnectionClosed(const CConnection*)
{
	qDebug() << "OsiTransportTest::slotConnectionClosed";

	checkClientConnected = false;
}

void OsiTransportTest::slotClientTSduReady(const CConnection* that)
{

	if (checkClientConnected)
	{
		qDebug() << "OsiTransportTest::slotClientTSduReady";

		if ( (const_cast<CConnection*>(that))->receive(m_clientRcvData) == true)
		{
			// Обработка данных и сброс буфера по окончании
		}
	}
}

void OsiTransportTest::slotClientIOError(QString str)
{
	qDebug() << "OsiTransportTest::slotClientIOError: " << str;

	checkClientErrorTransfer = true;
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
	QThread::usleep(500);
	clt->start();

}

void OsiTransportTest::run()
{
    // Do processing here

	CppUnit::TextTestRunner runner;
	runner.addTest(test1);
	runner.addTest(test2);
	runner.addTest(test3);

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
    QTimer::singleShot(1000, test, SLOT(run()));

    return  a.exec();
}
