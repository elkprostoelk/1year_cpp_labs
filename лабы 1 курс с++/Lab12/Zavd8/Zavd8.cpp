#include<iostream>
using namespace std;
class Student
{
protected:
	string name;
	int age;
	float averageScore;
	int scholarship;
public:
	Student()
	{
		scholarship = 0;
		name = "xxxxxx";
		age = 17;
		averageScore = 0.;
	}
	Student(string name, int age, int scholarship, float averageScore)
	{
		this->name = name;
		this->age = age;
		this->scholarship = scholarship;
		this->averageScore = averageScore;
	}
	void getFromKeyboard()
	{
		cin >> name;
		cin >> age;
		cin >> scholarship;
		cin >> averageScore;
	}
	void printOnScreen()
	{
		cout << name << "\t" << age << "\t" << scholarship << "\t" << averageScore << endl;
	}
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	int getAge()
	{
		return age;
	}
	void setScholarship(int scholarship)
	{
		this->scholarship = scholarship;
	}
	int getScholarship()
	{
		return scholarship;
	}
	void setAverageScore(float averageScore)
	{
		this->averageScore = averageScore;
	}
	float getAverageScore()
	{
		return averageScore;
	}
};
class Extern : public Student
{
private:
	int payment;
public:
	Extern() : Student()
	{
		payment = 15000;
	}
	Extern(string name, int age, int scholarship, float averageScore, int payment) : Student(name, age, scholarship, averageScore)
	{
		this->payment = payment;
	}
	virtual ~Extern()
	{
		cout << "Extern dectructor has worked" << endl;
	}
	void getFromKeyboard()
	{
		cin >> name;
		cin >> age;
		cin >> scholarship;
		cin >> averageScore;
		cin >> payment;
	}
	void printOnScreen()
	{
		cout << name << "\t" << age << "\t" << scholarship << "\t" << averageScore << "\t" << payment << endl;
	}
	void setPayment(int payment)
	{
		this->payment = payment;
	}
	int getPayment()
	{
		return payment;
	}
};
int main()
{
	/*Student stud1, stud2("Ivanov", 19, 1300, 89.5);
	stud1.printOnScreen(); stud2.printOnScreen();
	stud1.getFromKeyboard();
	stud1.printOnScreen(); stud2.printOnScreen();
	cout << endl;
	Extern ext1, ext2("Petrov", 20, 0, 76.5, 14000);
	ext1.printOnScreen(); ext2.printOnScreen();
	ext1.getFromKeyboard();
	ext1.printOnScreen(); ext2.printOnScreen();*/
	system("pause");
	return 0;
}