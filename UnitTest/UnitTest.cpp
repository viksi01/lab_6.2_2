#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.2_2/lab_6.2_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { -25, 73, 76, 60 };
			int t = Max(a, 4, 1,1);
			Assert::AreEqual(t, 73);
		}
	};
}
