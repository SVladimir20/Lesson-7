#include <iostream>
#define check ((a >=0 && a < b) ? (cout << "true"): (cout << "false"))
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");	
	int a, b;
	cout << "������� 2 �����: ";
	cin >> a >> b;
	check;
	return 0;
}