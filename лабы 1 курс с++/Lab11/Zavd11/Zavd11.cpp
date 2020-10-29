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
	bool isSmoking;
	float taxe;
	Worker()
	{
		tabelNumber = 111111;
		name = "Vasilij";
		surname = "Pupkin";
		sex = "male";
		age = 30;
		weight = 75;
		isSmoking = false;
		taxe = 1000.;
	}

	Worker(int defaultTableNumber, string defaultname, string defaultsurname, string defaultsex, unsigned short int defaultAge, float defaultWeight, bool defaultIsSmoking, float defaultTaxe)
	{
		tabelNumber = defaultTableNumber;
		name = defaultname;
		surname = defaultsurname;
		sex = defaultsex;
		age = defaultAge;
		weight = defaultWeight;
		isSmoking = defaultIsSmoking;
		taxe = defaultTaxe;
	}

	void printDataToConsole() {
		cout << tabelNumber << "\t" << name << "\t" << surname << "\t" << sex << "\t" << age  << "\t" << weight << "\t" << isSmoking << "\t" << taxe << endl;
	}
	void changeValues()
	{
		cin >> tabelNumber >> name >> surname >> sex >> age >> weight >> isSmoking >> taxe;
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
const int Size = 10;
class ProtectedArray
{
	protected:
		Worker Array[Size];
	public:
		ProtectedArray()
		{
			for (int i = 0; i < Size; i++)
				Array[i] = Worker();
		}
		Worker& operator [](int i)
		{
			if (i > Size) { cout << "Out of range" << endl; return Array[0]; }
			return Array[i];
		}
};
int main()
{
	Worker wrk1;
	wrk1.changeValues();
	ProtectedArray arr{};
	arr[0].printDataToConsole();
	arr[1] = wrk1;
	arr[1].printDataToConsole();
	system("pause");
	return 0;
}