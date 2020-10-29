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
	static float sumStyp(Student s1, Student s2)
	{
		float sum = 0.;
		sum += s1.getStypendia();
		sum += s2.getStypendia();
		return sum;
	}
	static float sredAge(Student s1, Student s2)
	{
		int sum = 0;
		sum += s1.getAge();
		sum += s2.getAge();
		return (float)sum / 2;
	}
};

void main()
{
	setlocale(LC_ALL, "Russian");
	Student stud1,stud2;
	stud1.setStudent();
	stud2.setStudent();
	stud1.printStudent();
	stud2.printStudent();
	cout << "Средний возраст: " << Student::sredAge(stud1, stud2) << endl;
	cout << "Суммарная стипендия: " << Student::sumStyp(stud1, stud2) << endl;
}