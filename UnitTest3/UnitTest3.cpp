#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 5.3/Project 5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double final;
            const double x = 0;
            final = g(x);
            Assert::AreEqual(final, 1.);
        }
    };
}