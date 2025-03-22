#include "pch.h"
#include "CppUnitTest.h"
#include "../2.5/Triad.h"
#include "../2.5/Triad.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad t1(9, 8, 7);
			Triad t2;
			t2 = t1;
			Assert::AreEqual(t1.toString(), t2.toString());
		}
	};
}
