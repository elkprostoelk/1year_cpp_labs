#include<iostream>
using namespace std;
class Student
{
public:
	unsigned int age;
	string sex;
	float stypendia;
};
int main()
{
	Student std1, std2;
	std1 = { 20,"male",1300. };
	std2 = { 21,"female",1600. };
	Student stud[2] = { std1,std2 };
	for (int i = 0; i < 2; i++)
	{
		cout << "Student " << i+1 << endl;
		cout << stud[i].age << "\t";
		cout << stud[i].sex << "\t";
		cout << stud[i].stypendia;
		cout << endl;
	}
	system("pause");
	return 0;
}