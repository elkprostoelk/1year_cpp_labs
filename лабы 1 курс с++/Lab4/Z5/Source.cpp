#include <iostream>
using namespace std;
int beatsPerYears(int);
int main()
{
	int y;
	cin >> y;
	cout << beatsPerYears(y) << endl;
	system("pause");
	return 0;
}
int beatsPerYears(int Years)
{
	int second = 1;
	int minute = second * 60;
	int hour = minute * 60;
	int day = hour * 24;
	int year = day * 365;
	int Vyears = year / 4;
	return Years * year - (Vyears * day);
}