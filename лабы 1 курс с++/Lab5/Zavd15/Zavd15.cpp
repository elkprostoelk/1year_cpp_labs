#include<iostream>
using namespace std;
void DoubleANum(int a, int &res)
{
	res = 2 * a;
}
int main()
{
	int a,res;
	cin >> a;
	DoubleANum(a, res);
	cout << res << endl;
	system("pause");
	return 0;
}