#include<iostream>
using namespace std;
enum Days
{
	Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};
int main()
{
	int d;
	do
	{
		cin >> d;
		switch (d)
		{
			case Days::Monday: cout << "Monday" << endl; break;
			case Days::Tuesday: cout << "Tuesday" << endl; break;
			case Days::Wednesday: cout << "Wednesday" << endl; break;
			case Days::Thursday: cout << "Thursday" << endl; break;
			case Days::Friday: cout << "Friday" << endl; break;
			case Days::Saturday: cout << "Saturday" << endl; break;
			case Days::Sunday: cout << "Sunday" << endl; break;
			default:
				cout << "Error" << endl; break;
		}
	} while (d > 0 && d < 8);
	char day;
	do
	{
		cin >> day;
		switch (day)
		{
		case '1': cout << "Monday" << endl; break;
		case '2': cout << "Tuesday" << endl; break;
		case '3': cout << "Wednesday" << endl; break;
		case '4': cout << "Thursday" << endl; break;
		case '5': cout << "Friday" << endl; break;
		case '6': cout << "Saturday" << endl; break;
		case '7': cout << "Sunday" << endl; break;
		default:
			cout << "Error" << endl; break;
		}
	} while (day > '0' && day < '8');
	do
	{
		cin >> d;
		switch (d)
		{
		case 1: cout << "Monday" << endl; break;
		case 2: cout << "Tuesday" << endl; break;
		case 3: cout << "Wednesday" << endl; break;
		case 4: cout << "Thursday" << endl; break;
		case 5: cout << "Friday" << endl; break;
		case 6: cout << "Saturday" << endl; break;
		case 7: cout << "Sunday" << endl; break;
		default:
			cout << "Error" << endl; break;
		}
	} while (d > 0 && d < 8);
	return 0;
}