#include <iostream>
using namespace std;
bool isRussian(char);
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char input;
	cin >> input;
	if (!isRussian(input))
	{
		cout << "������ �����. ������� �� ������� �����" << endl;
	}
	system("pause");
	return 0;
}
bool isRussian(char ch)
{
	if ((int)ch >= 192 && (int)ch <= 223) return true;
	else return false;
}