#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	cout << "Значення масиву : ";
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}

int Num(int* a, const int size)
{
	int n = 0;
	cout << "Значення масиву, які підходять критеріям : ";
	for (int i = 0; i < size; i++)
		if (a[i] > 0 || a[i] % 2 != 0)
		{
			n++;
			cout << a[i] << " ";
		}
	cout << endl;
	return n;
}

int Sum(int* a, const int size)
{
	int s = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 || a[i] % 2 != 0)
			s += a[i];
	return s;
}

int* Zero(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		if (a[i] > 0 || a[i] % 2 != 0)
			a[i] = 0;
	return a;
}

int main()
{
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	const int n = 27;
	int c[n];
	int Low = -35, High = 25;

	Create(c, n, Low, High);
	Print(c, n);

	cout << "К-сть значень, які підходять критеріям : " << Num(c, n) << endl;
	cout << "Сума значень, які підходять критеріям : " << Sum(c, n) << endl;
	
	Print(Zero(c, n), n);

	return 0;
}