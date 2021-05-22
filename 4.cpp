#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;
#pragma pack(push, 1)
struct Employee
{
	size_t id{};
	string first_name;
	string last_name;
	unsigned int phone{};
	unsigned int salary{};
};
#pragma pack(pop)
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	size_t Size = 3;
	Employee *p = new Employee[Size];
	for (size_t i = 0; i < Size; i++)
	{
		cout << "Введите номер сотрудника: ";
		cin >> p[i].id;
		cout << "Введите имя сотрудника: ";
		cin.ignore();
		getline(cin, p[i].first_name);
		cout << "Введите фамилию сотрудника: ";
		getline(cin, p[i].last_name);
		cout << "Введите номер телефона сотрудника: ";
		cin >> p[i].phone;
		cout << "Введите размер оклада сотрудника: ";
		cin >> p[i].salary;
	}
	cout << endl << "Информация о сотрудниках" << endl;
	for (size_t i = 0; i < Size; i++)
	{
		cout << "Номер сотрудника: " << p[i].id << ", имя: " << p[i].first_name << ", фамилия: " << p[i].last_name
			<< ", номер телефона: " << p[i].phone << ", оклад: " << p[i].salary << endl;
	}
	ofstream StructSave;
	StructSave.open("Employee.txt");
	StructSave << "Информация о сотрудниках" << endl;
	for (size_t i = 0; i < Size; i++)
	{
		StructSave << "Номер сотрудника: " << p[i].id << ", имя: " << p[i].first_name << ", фамилия: " << p[i].last_name
			<< ", номер телефона: " << p[i].phone << ", оклад: " << p[i].salary << endl;
	}
	cout << endl << "Размер структуры равен " << sizeof(Employee) << " байт." << endl;
	delete[] p;
	return 0;
}