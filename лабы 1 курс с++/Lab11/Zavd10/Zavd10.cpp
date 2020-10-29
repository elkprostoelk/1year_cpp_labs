#include<iostream>
#include<string>
using namespace std;
class Worker
{
public:
	int tabelNumber;
	string name;
	string surname;
	string sex;
	unsigned short int age;
	float weight;
	string address;
	bool isSmoking;
	float taxe;
	Worker()
	{
		tabelNumber = 111111;
		name = "Vasilij";
		surname = "Pupkin";
		sex = "male";
		age = 30;
		address = "Hollywood, Los Angeles, CA";
		weight = 75;
		isSmoking = false;
		taxe = 1000.;
	}

	Worker(int defaultTableNumber, string defaultname, string defaultsurname, string defaultsex, unsigned short int defaultAge, string defaultaddress, float defaultWeight, bool defaultIsSmoking, float defaultTaxe)
	{
		tabelNumber = defaultTableNumber;
		name = defaultname;
		surname = defaultsurname;
		address = defaultaddress;
		sex = defaultsex;
		age = defaultAge;
		weight = defaultWeight;
		isSmoking = defaultIsSmoking;
		taxe = defaultTaxe;
	}

	void printDataToConsole() {
		cout << tabelNumber << "\t" << name << "\t" << surname << "\t" << sex << "\t" << age << "\t" << address << "\t" << weight << "\t" << isSmoking << "\t" << taxe << endl;
	}
	void changeValues()
	{
		cin >> tabelNumber >> name >> surname >> sex >> age >> weight >> isSmoking >> taxe;
		getline(cin, address);
	}
	bool operator ==(const Worker& w2)
	{
		if (this->surname == w2.surname) return true;
		else return false;
	}
	bool operator <(const Worker& w2)
	{
		if (this->surname < w2.surname) return true;
		else return false;
	}
	bool operator >(const Worker& w2)
	{
		if (this->surname > w2.surname) return true;
		else return false;
	}
};
int findWorker(Worker arr[], int MAX, Worker findwrk)
{
	for (int i = 0; i < MAX; i++)
	{
		if (arr[i] == findwrk) return i;
	}
	return -1;
}
void sort(Worker arr[], int MAX)
{
	Worker temp; int min = 0;
	for (int k = 1; k < MAX; k++)
	{
		for (int i = k; i < MAX; i++)
		{
			if (arr[i] < arr[min]) min = i;
		}
		temp = arr[min];
		arr[min] = arr[k];
		arr[k] = temp;
	}
}
int main()
{
	int n; cin >> n;
	Worker* workers = new Worker[n];
	for (int i = 0; i < n; i++)
	{
		workers[i].changeValues();
	}
	Worker find; cin >> find.surname;
	for (int i = 0; i < n; i++)
	{
		if (i == findWorker(workers, n, find)) cout << "Index of worker: " << i << endl;
		else cout << "No such worker" << endl;
	}
	delete[] workers;
	system("pause");
	return 0;
}