#include<iostream>
using namespace std;
int main()
{
	int x;
	do
	{
		cin >> x;
	} while (x < 0 || x>100);
	cout << x << endl;
	system("pause");
	return 0;
}