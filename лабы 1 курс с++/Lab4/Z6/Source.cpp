#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char ch = 'ë';
	cout << "ch = " << ch << " " << "int = " << (int)ch; // ch = ë (int)ch = -21
	system("pause");
	return 0;
}