#include<iostream>
using namespace std;
bool IsSymbol(char ch)
{
	if (ch == 'Y' || ch == 'y' || ch == 'd' || ch == 'D') return true;
	else return false;
}
int main()
{
	char symbol;
	cin >> symbol;
	if (IsSymbol(symbol)) cout << "True";
	else cout << "False";
	cout << endl;
	system("pause");
	return 0;
}