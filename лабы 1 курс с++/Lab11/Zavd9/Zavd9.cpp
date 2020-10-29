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
int main()
{
	
}