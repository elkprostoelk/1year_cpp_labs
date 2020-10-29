#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int* pA = &a;
	cout << "<a>: " << *pA << endl;
	*pA = 20;
	cout << "<a>: " << *pA << endl;
	system("pause");
	return 0;
}