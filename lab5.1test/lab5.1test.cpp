
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest2
{
    TEST_CLASS(UnitTest5_1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double result = g(2.0, 3.0);
            Assert::AreEqual(19.0, result);
        }
    };
}