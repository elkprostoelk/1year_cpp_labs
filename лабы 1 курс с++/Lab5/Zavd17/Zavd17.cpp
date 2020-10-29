#include<iostream>
using namespace std;
int SumOfTwo(int a)
{
	int b = 5;
	return a + b;
}
int main()
{
	int a;
	cin >> a;
	cout << SumOfTwo(a) << endl;
	system("pause");
	return 0;
}