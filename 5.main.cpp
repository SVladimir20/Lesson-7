//Задание 5
#include <iostream>
#include "5.mylib.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const size_t Size = 4;
	float a[Size];
	Task5::ArrayFill(a, Size);
	Task5::ArrayCount(a, Size);
	cout << "Вывод массива: ";
	Task5::ArrayOut(a, Size);
    return 0;
}