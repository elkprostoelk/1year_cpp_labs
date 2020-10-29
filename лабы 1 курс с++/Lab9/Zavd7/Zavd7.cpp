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
Student changeStudent(Student);
Student* changeStudentpointer(Student*);
void changeStudentref(Student&);
int main()
{
	Student stud1;
	stud1.printStudent();
	stud1 = changeStudent(stud1);
	stud1.printStudent();
	Student* pst = &stud1;
	pst = changeStudentpointer(pst);
	pst->printStudent();
	changeStudentref(stud1);
	stud1.printStudent();
	system("pause");
	return 0;
}
Student changeStudent(Student std)
{
	std.setStudent();
	return std;
}
Student* changeStudentpointer(Student* std)
{
	std->setStudent();
	return std;
}
void changeStudentref(Student& std)
{
	std.setStudent();
}