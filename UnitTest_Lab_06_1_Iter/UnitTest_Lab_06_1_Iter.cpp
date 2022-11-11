#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_1_Iter/Lab_06_1_Iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void Test(int* a, int* c, const int size)
{
	int n = 0, s = 0;
	for (int i = 0; i < n; i++)
	{
		if (c[i] > 0 || c[i] % 2 != 0)
		{
			n++;
			s += c[i];
			c[i] = 0;
		}
		Assert::AreEqual(c[i], a[i]);
	}
	Assert::AreEqual(n, Num(c, size));
	Assert::AreEqual(s, Sum(c, size));
}

namespace UnitTestLab061Iter
{
	TEST_CLASS(UnitTestLab061Iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 27;
			int c[n], Low = -35, High = 25;

			Create(c, n, Low, High);

			int* a = Zero(c, n);

			Test(a, c, n);
		}
	};
}