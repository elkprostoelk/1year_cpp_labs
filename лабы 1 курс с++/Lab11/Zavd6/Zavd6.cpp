#include<iostream>
using namespace std;
class Worker
{
public:
	int tabelNumber;
	string name;
	string sex;
	unsigned short int age;
	float weight;
	bool isSmoking;
	float taxe;
	Worker()
	{
		tabelNumber = 111111;
		name = "Vasilij";
		sex = "male";
		age = 30;
		weight = 75;
		isSmoking = false;
		taxe = 1000.;
	}

	Worker(int defaultTableNumber, string defaultname, string defaultsex, unsigned short int defaultAge, float defaultWeight, bool defaultIsSmoking, float defaultTaxe)
	{
		tabelNumber = defaultTableNumber;
		name = defaultname;
		sex = defaultsex;
		age = defaultAge;
		weight = defaultWeight;
		isSmoking = defaultIsSmoking;
		taxe = defaultTaxe;
	}

	void printDataToConsole() {
		cout << tabelNumber << "\t" << name << "\t" << sex << "\t" << age << "\t" << weight << "\t" << isSmoking << "\t" << taxe << endl;
	}
	void changeValues()
	{
		cin >> tabelNumber >> name >> sex >> age >> weight >> isSmoking >> taxe;
	}
};
int main()
{
	const int n = 3;
	Worker* arr = new Worker[n];
	for (int i = 0; i < n; i++)
		arr[i].changeValues();
	for (Worker* i = arr; i < arr+n; i++)
		i->printDataToConsole();
	cout << "Number of array elements: " << n << endl;
	//поскольку все элементы одинаковы, нет смысла искать наибольший
	int s = 0;
	for (Worker* i = arr; i < arr + n; i++)
		s = s + i->age;
	cout << "Summary age: " << s << endl;
	delete[] arr;
	arr = 0;
	system("pause");
	return 0;
}