#include<iostream>
using namespace std;
class Student
{
public:
	unsigned int age;
	string sex;
	float stypendia;
	Student(unsigned int a, string s, float styp)
	{
		age = a; sex = s; stypendia = styp;
	}
	Student()
	{
		setStudent();
	}
	~Student()
	{

	}
	void setStudent()
	{
		cout << "������� �������:" << endl;
		cin >> age;
		cout << "������� ���:" << endl;
		cin >> sex;
		cout << "������� ���������:" << endl;
		cin >> stypendia;
	}
	void printStudent(int n)
	{
		cout << "������� #" << n + 1 << endl;
		cout << age << "\t" << sex << "\t" << stypendia << endl;
	}
};
void main()
{
	
}