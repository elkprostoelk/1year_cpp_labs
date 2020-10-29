#include<iostream>
using namespace std;
class Student
{
public:
	unsigned int age;
	string sex;
	float stypendia;
	void setStudent()
	{
		cout << "Введите возраст:" << endl;
		cin >> age;
		cout << "Введите пол:" << endl;
		cin >> sex;
		cout << "Введите стипендию:" << endl;
		cin >> stypendia;
	}
	void printStudent(int n)
	{
		cout << "Студент #" << n + 1 << endl;
		cout << age << "\t" << sex << "\t" << stypendia << endl;
	}
};
void main()
{
	setlocale(LC_ALL, "Russian");
	Student stud[2];
	for (int i = 0; i < 2; i++)
	{
		stud[i].setStudent();
	}
	for (int i = 0; i < 2; i++)
	{
		stud[i].printStudent(i);
	}
	system("pause");
}
