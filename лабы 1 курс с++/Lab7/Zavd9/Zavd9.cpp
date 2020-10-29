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
	void printStudent()
	{
		cout << "Age: " << age << " Sex: " << sex << " Stypendia: " << stypendia << endl;
	}
	UINT getAge()
	{
		return age;
	}
	string getSex()
	{
		return sex;
	}
	float getStypendia()
	{
		return stypendia;
	}
};
int main()
{
	Student stud;
	bool continueWork = true;
	do
	{
		stud.setStudent();
		stud.printStudent();
		cout << "Do you want to continue? 1-yes, 0-no ";
		cin >> continueWork;
	} while (continueWork);
	return 0;
}