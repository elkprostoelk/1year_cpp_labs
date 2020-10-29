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
	void printStudent()
	{
		cout << getAge() << "\t" << getSex() << "\t" << getStypendia() << endl;
	}
};
int main()
{
	Student* stud1 = new Student;
	stud1->setStudent();
	stud1->printStudent();
	delete stud1;
	return 0;
}