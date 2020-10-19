#include <QtTest>

// add necessary includes here

class Date : public QObject
{
    Q_OBJECT

public:
    Date();
    ~Date();

private slots:
    void test_case1();

};

Date::Date()
{

}

Date::~Date()
{

}

void Date::test_case1()
{

}

QTEST_APPLESS_MAIN(Date)

#include "tst_date.moc"
