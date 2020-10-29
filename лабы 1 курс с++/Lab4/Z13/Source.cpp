#include <iostream>
using namespace std;
int main()
{
	int a[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	int max = a[0];
	for (int i = 0; i < 3; i++)
	{
		if (a[i] > max) max = a[i];
	}
	cout << max << endl;
	system("pause");
	return 0;
}