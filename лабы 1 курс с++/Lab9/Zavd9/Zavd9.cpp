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
	Student()
	{
		age = 17; sex = "male"; stypendia = 0.;
	}
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
void GetAddress();
int main()
{
	GetAddress();
	system("pause");
	return 0;
}
void GetAddress()
{
	Student* s = new Student;
	cout << s << "\t" << (long)s << endl;
}