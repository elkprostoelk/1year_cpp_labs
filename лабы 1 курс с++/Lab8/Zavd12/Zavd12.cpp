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
int main()
{
	Student* stud1 = new Student; //после окончания работы с элементом нужно освободить от него память
	delete stud1; stud1 = 0;
	stud1 = new Student;
	delete stud1; stud1 = 0;
	stud1 = new Student;
	delete stud1; stud1 = 0;
	stud1 = new Student;
	delete stud1; stud1 = 0;
	return 0;
}