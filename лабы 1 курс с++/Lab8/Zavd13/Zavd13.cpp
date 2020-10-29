#include<iostream>
using namespace std;
typedef unsigned int UINT;
class Student
{
private:
	UINT *age;
	string *sex;
	float *stypendia;
public:
	Student()
	{
		age = new UINT;
		sex = new string;
		stypendia = new float;
		if (age == 0 || sex == 0 || stypendia == 0)
		{
			cout << "No free memory!!! Program exiting..." << endl;
			exit(1);
		}
		*age = 17;
		*sex = "male";
		*stypendia = 0.;
	}
	~Student()
	{
		delete age;
		delete sex;
		delete stypendia;
	}
	void setStudent()
	{
		cout << "Enter age:" << endl; cin >> *age;
		cout << "Enter sex:" << endl; cin >> *sex;
		cout << "Enter stypendia:" << endl; cin >> *stypendia;
	}
	void setAge(UINT newage)
	{
		*age = newage;
	}
	void setSex(string newsex)
	{
		*sex = newsex;
	}
	void setStypendia(float newst)
	{
		*stypendia = newst;
	}
	UINT getAge() const
	{
		return *age;
	}
	string getSex() const
	{
		return *sex;
	}
	float getStypendia() const
	{
		return *stypendia;
	}
	void printStudent()
	{
		cout << getAge() << "\t" << getSex() << "\t" << getStypendia() << endl;
	}
};
int main()
{
	Student* stud1 = new Student;
	stud1->printStudent();
	stud1->setAge(20); stud1->setSex("female"); stud1->setStypendia(1300.);
	stud1->printStudent();
	delete stud1;
	system("pause");
	return 0;
}