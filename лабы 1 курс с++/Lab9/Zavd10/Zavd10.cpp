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
class Worker
{
public:
	int tabelNumber;
	string secondName;
	string sex;
	UINT age;
	float weight;
	bool isSmoking;
	float taxe;
	Worker()
	{
		tabelNumber = 100;
		secondName = "Fosters";
		sex = "male";
		age = 20;
		weight = 123.;
		isSmoking = false;
		taxe = 100.;
	}
	void printDataToConsole() {
		cout << tabelNumber << endl << secondName << endl << sex << endl << age << endl << weight << endl << isSmoking << endl << taxe << endl;
	}
	void changeValues(int newTabelNumber, string newSecondName, string newsex, UINT newAge, float newWeight, bool newIsSmoking, float newTaxe)
	{
		tabelNumber = newTabelNumber;
		secondName = newSecondName;
		sex = newsex;
		age = newAge;
		weight = newWeight;
		isSmoking = newIsSmoking;
		taxe = newTaxe;
	}
};
class Employee
{
public:

	UINT age;
	UINT workedForInYears;
	float salary;

	Employee()
	{
		age = 18;
		workedForInYears = 0;
		salary = 0;
	};
	void printDataToConsole()
	{
		cout << "Age of Employee is " << age << endl;
		cout << "Employee worked for " << workedForInYears << " years" << endl;
		cout << "salary of Employee is " << salary << endl;
	};
	void changeValues(UINT newAge, UINT newExperience, float newSalary)
	{
		age = newAge;
		workedForInYears = newExperience;
		salary = newSalary;
	}
};
int main()
{
	Student* stud = new Student;
	Worker* wrk = new Worker;
	Employee* emp = new Employee;
	Student& refStud = *stud;
	Worker& refWrk = *wrk;
	Employee& refEmp = *emp;
	refStud.setStudent();
	refWrk.changeValues(2281337, "Ivanov", "male", 20, 75., true, 200);
	refEmp.changeValues(25, 5, 20000.);
	refStud.printStudent();
	refWrk.printDataToConsole();
	refEmp.printDataToConsole();
	delete stud; delete wrk; delete emp; stud = 0; wrk = 0; emp = 0;
	system("pause");
	return 0;
}