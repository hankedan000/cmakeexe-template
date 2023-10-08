#include "ExampleTest.h"

ExampleTest::ExampleTest()
{
}

void
ExampleTest::setUp()
{
	// run before each test case
}

void
ExampleTest::tearDown()
{
	// run after each test case
}

void
ExampleTest::test1()
{
	// test some stuff...
}

int main()
{
	CppUnit::TextUi::TestRunner runner;
	runner.addTest(ExampleTest::suite());
	return runner.run() ? 0 : EXIT_FAILURE;
}
