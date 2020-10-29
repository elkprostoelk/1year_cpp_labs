#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int* pa = &a; int& rA = a;
	cout << "address a: " << (long)pa << " *pa: " << *pa << " rA: " << rA << endl;
	*pa = 20;
	cout << "address a: " << (long)pa << " *pa: " << *pa << " rA: " << rA << endl;
	rA = 100;
	cout << "address a: " << (long)pa << " *pa: " << *pa << " rA: " << rA << endl;
	system("pause");
	return 0;
}