#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int* pA = &a;
	cout << "Address of <a>: " << pA << endl;
	cout << "<a>: " << *pA << endl;
	system("pause");
	return 0;
}