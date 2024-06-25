#include <QtTest>

// add necessary includes here

#include "../gcd/gcd.h"

class gcd_test : public QObject
{
    Q_OBJECT

public:
    gcd_test();
    ~gcd_test();

private slots:
    void test_case1();
    void testgcd();
};

gcd_test::gcd_test() {}

gcd_test::~gcd_test() {}

void gcd_test::test_case1() {}
void gcd_test::testgcd(){
    gcd x;
    QCOMPARE(x.get_gcd(5,5), 5);
    QCOMPARE(x.get_gcd(13,37), 1);
    QCOMPARE(x.get_gcd(125,25), 25);


}

QTEST_APPLESS_MAIN(gcd_test)

#include "tst_gcd_test.moc"
