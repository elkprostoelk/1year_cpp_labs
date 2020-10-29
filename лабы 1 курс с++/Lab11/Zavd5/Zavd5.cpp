#include<iostream>
using namespace std;
class  Worker
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
	Worker* workers[n];
	for (int i = 0; i < n; i++)
	{
		workers[i] = new Worker();
		workers[i]->changeValues();
	}
	for (Worker** i=workers; i < workers+n; i++)
	{
		(*i)->printDataToConsole();
	}
	for (int i = 0; i < n; i++)
	{
		delete workers[i];
		workers[i] = NULL;
	}
	system("pause");
	return 0;
}