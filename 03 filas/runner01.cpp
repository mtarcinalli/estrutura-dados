/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite1_init = false;
#include "Teste01.h"

static MyTestSuite1 suite_MyTestSuite1;

static CxxTest::List Tests_MyTestSuite1 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite1( "Teste01.h", 4, "MyTestSuite1", suite_MyTestSuite1, Tests_MyTestSuite1 );

static class TestDescription_suite_MyTestSuite1_testaVazia : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite1_testaVazia() : CxxTest::RealTestDescription( Tests_MyTestSuite1, suiteDescription_MyTestSuite1, 7, "testaVazia" ) {}
 void runTest() { suite_MyTestSuite1.testaVazia(); }
} testDescription_suite_MyTestSuite1_testaVazia;

static class TestDescription_suite_MyTestSuite1_testaInserir : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite1_testaInserir() : CxxTest::RealTestDescription( Tests_MyTestSuite1, suiteDescription_MyTestSuite1, 38, "testaInserir" ) {}
 void runTest() { suite_MyTestSuite1.testaInserir(); }
} testDescription_suite_MyTestSuite1_testaInserir;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
