#include <QtTest>
#include "date.hh"

// add necessary includes here

class datetest : public QObject
{
    Q_OBJECT

public:
    datetest();
    ~datetest();

private slots:
    void testStepFunction();
    void testCreation();
    void testCreation_data();

};

datetest::datetest()
{

}

datetest::~datetest()
{

}

void datetest::testCreation()
{
    QFETCH(unsigned int, year);
       QFETCH(unsigned int, month);
       QFETCH(unsigned int, day);
       Date d(day, month, year);
       QVERIFY2(d.giveDay() == day, "Wrong day");
       QVERIFY2(d.giveMonth() == month, "Wrong month");
       QVERIFY2(d.giveYear() == year, "Wrong year");
}

void datetest::testStepFunction()
{
    Date d = Date(1,1,2020);
       d.step(1);
       QCOMPARE(d.giveDay(), 2);
       QCOMPARE(d.giveMonth(), 1);
       QCOMPARE(d.giveYear(), 2020);
}

void datetest::testCreation_data()
{
    QTest::addColumn<unsigned int>("year");
        QTest::addColumn<unsigned int>("month");
        QTest::addColumn<unsigned int>("day");
        QTest::newRow("Yesterday")      << 2020u << 10u << 25u;
        QTest::newRow("Tomorrow")   << 2020u << 10u << 27u;
        QTest::newRow("Next Month") << 2020u << 11u << 1u;
        QTest::newRow("Next Year") << 2021u << 1u << 1u;
        QTest::newRow("Last year") << 2019u << 10u << 26u;
}


QTEST_APPLESS_MAIN(datetest)

#include "tst_datetest.moc"
