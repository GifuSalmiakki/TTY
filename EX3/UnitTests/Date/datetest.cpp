#include <QString>
#include <QtTest>

#include "date.hh"

// add necessary includes here
Q_DECLARE_METATYPE(Date::Weekday);

class DateTest : public QObject
{
    Q_OBJECT

public:
    DateTest();
    ~DateTest();

private slots:
    void weekday();
    void weekday_data();

};

DateTest::DateTest()
{

}

DateTest::~DateTest()
{

}

void DateTest::weekday_data()
{
    // This method defines the test matrix for the weekday test and generates the desired test cases there

    // Defining columns for the test matrix (types and names)
    QTest::addColumn<unsigned int>("day");
    QTest::addColumn<unsigned int>("month");
    QTest::addColumn<unsigned int>("year");
    QTest::addColumn<Date::Weekday>("weekday");

    // Generating test cases for the test matrix, 3u etc. are needed since the type is unsigned
    QTest::newRow("today")      << 3u  << 2u  << 2014u << Date::MONDAY;
    QTest::newRow("last Christmas") << 24u << 12u << 2013u << Date::TUESDAY;
    QTest::newRow("next May Day")  << 1u  << 5u  << 2014u << Date::THURSDAY;
    QTest::newRow("end of the year")<< 31u << 12u << 2013u << Date::TUESDAY;
    QTest::newRow("new year")  << 1u  << 1u  << 2014u << Date::WEDNESDAY;
}

QTEST_APPLESS_MAIN(DateTest)

#include "tst_date.moc"
