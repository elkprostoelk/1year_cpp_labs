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
		cout << "Ошибка ввода. Введена не русская буква" << endl;
	}
	system("pause");
	return 0;
}
bool isRussian(char ch)
{
	if ((int)ch >= 192 && (int)ch <= 223) return true;
	else return false;
}