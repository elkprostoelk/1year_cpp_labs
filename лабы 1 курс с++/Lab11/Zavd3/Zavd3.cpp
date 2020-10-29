#include<iostream>
using namespace std;
int main()
{
	const int n = 3;
	int cr[n][n] = { {0,0,0},{0,0,0},{0,0,0} };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << cr[i][j] << " ";
			cr[i][j] = -1;
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << cr[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}