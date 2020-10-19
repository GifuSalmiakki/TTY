#include <QString>
#include <QtTest>
#include "date.hh"

class MorottajaTest : public QObject
{
    Q_OBJECT

public:
    MorottajaTest();

private Q_SLOTS:

private:
    std::string const testPerson = "Pekka";

};

MorottajaTest::MorottajaTest()
{
}



void MorottajaTest::testMorotusCounter()
{
}



QTEST_APPLESS_MAIN(MorottajaTest)

#include "morottajatest.moc"
