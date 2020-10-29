#include<iostream>
using namespace std;
double Division(int a, int b)
{
	if (b != 0) return (double)a / b;
	else return -1.0;
}
int main()
{
	int a, b;
	cin >> a >> b;
	if (Division(a, b) != -1.0)
	{
		cout << Division(a, b) << endl;
	}
	else cout << "Division on zero!" << endl;
	system("pause");
	return 0;
}