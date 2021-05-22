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
		cout << "������� ����� ����������: ";
		cin >> p[i].id;
		cout << "������� ��� ����������: ";
		cin.ignore();
		getline(cin, p[i].first_name);
		cout << "������� ������� ����������: ";
		getline(cin, p[i].last_name);
		cout << "������� ����� �������� ����������: ";
		cin >> p[i].phone;
		cout << "������� ������ ������ ����������: ";
		cin >> p[i].salary;
	}
	cout << endl << "���������� � �����������" << endl;
	for (size_t i = 0; i < Size; i++)
	{
		cout << "����� ����������: " << p[i].id << ", ���: " << p[i].first_name << ", �������: " << p[i].last_name
			<< ", ����� ��������: " << p[i].phone << ", �����: " << p[i].salary << endl;
	}
	ofstream StructSave;
	StructSave.open("Employee.txt");
	StructSave << "���������� � �����������" << endl;
	for (size_t i = 0; i < Size; i++)
	{
		StructSave << "����� ����������: " << p[i].id << ", ���: " << p[i].first_name << ", �������: " << p[i].last_name
			<< ", ����� ��������: " << p[i].phone << ", �����: " << p[i].salary << endl;
	}
	cout << endl << "������ ��������� ����� " << sizeof(Employee) << " ����." << endl;
	delete[] p;
	return 0;
}