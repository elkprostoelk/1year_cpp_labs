#include<iostream>
using namespace std;
int main()
{
	cout << "FOR:" << endl;
	for (int i = 100; i <= 200; i+=2)
	{
		cout << i << " ";
	}
	cout << endl << "WHILE" << endl;
	int x = 100;
	while (x <= 200)
	{
		cout << x << " ";
		x += 2;
	}
	cout << endl << "DO-WHILE" << endl;
	x = 100;
	do
	{
		cout << x << " ";
		x += 2;
	} while (x<=200);
	cout << endl;
	system("pause");
	return 0;
}