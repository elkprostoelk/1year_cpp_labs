#include <iostream>
using namespace std;
int main()
{
	int a[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	int max=a[0], min=a[0];
	for (int i = 0; i < 3; i++)
	{
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	cout << "max=" << max << "; min=" << min << endl;
	system("pause");
	return 0;
}