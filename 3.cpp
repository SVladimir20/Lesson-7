#include <iostream>
#define Size 8
#define SwapINT (j + 1)
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a[Size];
	cout << "¬ведите 8 целочисленных элементов массива." << endl;
	for (size_t i = 0; i < Size; i++)
	{
		cout << "Ёлемент " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << "¬ведЄнный массив: ";
	for (size_t i = 0; i < Size; i++)
	{
		cout << a[i] << " ";
	}
	int temp;
	for (int i = 0; i < Size - 1; i++)
	{
		for (int j = 0; j < Size - i - 1; j++)
		{
			if (a[j] > a[SwapINT])
			{
				temp = a[j];
				a[j] = a[SwapINT];
				a[SwapINT] = temp;
			}
		}
	}
	cout << endl << "ќтсортированный массив: ";
	for (size_t i = 0; i < Size; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}