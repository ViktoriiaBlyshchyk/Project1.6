#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project1.6\Project1.6\Lorry.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Lorry a;
			double c = 20;
			double d = a.Change2();
			Assert::AreEqual(d, c);
		}
	};
}
