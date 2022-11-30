#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.2(1)/laba6.2(1).cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(MaxMin)
		{
			const int n = 10;
			int a[n]{ -79,43,-78,-4,8,-67,45,-21,97,-42 };
			int max = 97;
			int min = -79;
			Assert::AreEqual(max, min);

		}
	};
}