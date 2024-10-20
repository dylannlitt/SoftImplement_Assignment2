#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangeUnitTests
{
    TEST_CLASS(RectangeUnitTests)
    {
    public:

        TEST_METHOD(TestGetPerimeter)
        {
            int length = 5;
            int width = 3;

            int perimeter = getPerimeter(&length, &width);

            Assert::AreEqual(16, perimeter);
        }

        TEST_METHOD(TestGetArea)
        {
            int length = 5;
            int width = 3;

            int area = getArea(&length, &width);

            Assert::AreEqual(15, area);
        }

        TEST_METHOD(TestSetLength_ValidInput)
        {
            int length = 0;
            int input = 50;

            setLength(input, &length);

            Assert::AreEqual(50, length);
        }

        TEST_METHOD(TestSetLength_MinEdgeCase)
        {
            int length = 0;
            int input = 1;

            setLength(input, &length);

            Assert::AreEqual(1, length);
        }

        TEST_METHOD(TestSetLength_BelowMin)
        {
            int length = 10;
            int input = 0;


            setLength(input, &length);

            Assert::AreEqual(10, length);
        }

        TEST_METHOD(TestSetWidth_ValidInput)
        {
            int width = 0;
            int input = 70;

            setWidth(input, &width);

            Assert::AreEqual(70, width);
        }

        TEST_METHOD(TestSetWidth_MaxEdgeCase)
        {
            int width = 0;
            int input = 99;

            setWidth(input, &width);

            Assert::AreEqual(99, width);
        }

        TEST_METHOD(TestSetWidth_AboveMax)
        {
            int width = 20;
            int input = 100;

            setWidth(input, &width);

            Assert::AreEqual(20, width);
        }
    };
}
