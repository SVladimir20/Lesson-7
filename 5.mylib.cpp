//Задание 5
#include <iostream>
#include <cstdlib>
using namespace std;
namespace Task5
{
	int p, m, z = 0;
	void ArrayFill(float a[], const size_t Size)
	{
		for (size_t i = 0; i < Size; i++)
		{
			a[i] = (rand() % 20001 - 10000) / 7.0f;
		}
	}
	void ArrayCount(float a[], const size_t Size)
	{
		for (size_t i = 0; i < Size; i++)
		{
			if (a[i] > 0)
			{
				p = p + 1;
			}
			else if (a[i] < 0)
			{
				m++;
			}
			else
			{
				z++;
			}
		}
		cout << "Положительных элементов: " << p << endl;
		cout << "Отрицательных элементов: " << m << endl;
		cout << "Нулей: " << z << endl;
	}
	void ArrayOut(float a[], const size_t Size)
	{
		for (size_t i = 0; i < Size; i++)
		{
			cout << a[i] << " ";
		}
	}
}