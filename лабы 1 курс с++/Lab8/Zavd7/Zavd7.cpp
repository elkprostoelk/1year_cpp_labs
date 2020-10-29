#include <iostream>
using namespace std;
typedef unsigned short int USHORT;
class Employee
{
public:

	USHORT age;
	USHORT year;
	float salary;
	Employee(USHORT defaultAge, USHORT defaultYear, float defaultSalary)
	{
		age = defaultAge;
		year = defaultYear;
		salary = defaultSalary;
	};
	void printData()
	{
		cout << "Age of employee is " << age << endl;
		cout << "Employee had been working for " << year << " years" << endl;
		cout << "Salary of employee is " << salary << endl;
	};
};
int main()
{
	Employee* Prizovnik = new Employee{ 18, 14, 2500. };
	Prizovnik->printData();
	delete Prizovnik;
	system("pause");
	return 0;
}