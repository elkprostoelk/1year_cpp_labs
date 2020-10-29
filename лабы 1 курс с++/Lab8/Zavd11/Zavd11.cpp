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
	Student stud1;
	stud1.setStudent();
	Student* stud; //висячий указатель
	stud = &stud1; // указатели нужно всегда инициализировать
	delete stud; stud=0; //после очистки памяти указатель нужно инициализировать, но в конце программы это необязательно
	return 0;
}