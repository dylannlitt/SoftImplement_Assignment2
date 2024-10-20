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

    };
}
