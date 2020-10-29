#include<iostream>
using namespace std;
inline int numOfSymbol(char ch)
{
	return (int)ch;
}
int main()
{
	char ch;
	cin >> ch;
	cout << numOfSymbol(ch);
	system("pause");
	return 0;
}