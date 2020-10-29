#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int chislo;
	int sum = 0, dob = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> chislo;
		sum += chislo;
		dob *= chislo;
	}
	cout << sum << "\t" << dob << endl;
	cout << endl;
	sum = 0; dob = 1;
	int chislo2=0;
	do 
	{
		cin >> chislo2;
		if (chislo2 == -1) break;
		else
		{
			sum += chislo2;
			dob *= chislo2;
		}
	} while (chislo2 != -1);
	cout << sum << "\t" << dob << endl;
	system("pause");
	return 0;
}