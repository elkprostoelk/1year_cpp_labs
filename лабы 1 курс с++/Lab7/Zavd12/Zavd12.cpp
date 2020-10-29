#include<iostream>
using namespace std;
int main()
{
	int power; bool continueWork;
	do
	{
		cin >> power;
		switch (power)
		{
		case 25: cout << "2500h" << endl; break;
		case 40:
		case 60: cout << "1000h" << endl; break;
		case 75: 
		case 100: cout << "750h" << endl; break;
		case 150:
		case 200: cout << "500h" << endl; break;
		default:
			cout << "Error" << endl; break;
		}
		cout << "Continue? 1-yes, 0-no: ";
		cin >> continueWork;
	} while (continueWork == true);
	return 0;
}

