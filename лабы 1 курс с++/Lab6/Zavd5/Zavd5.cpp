#include<iostream>
using namespace std;
typedef unsigned int UINT;
class Student
{
private:
	UINT age;
	string sex;
	float stypendia;
public:
	void setStudent()
	{
		cout << "Enter age:" << endl; cin >> age;
		cout << "Enter sex:" << endl; cin >> sex;
		cout << "Enter stypendia:" << endl; cin >> stypendia;
	}
	void getStudent()
	{
		cout << age << "\t" << sex << "\t" << stypendia << endl;
	}
};
void main()
{
	Student std;
	std.setStudent();
	cout << "Student:" << endl;
	std.getStudent();
	system("pause");
}