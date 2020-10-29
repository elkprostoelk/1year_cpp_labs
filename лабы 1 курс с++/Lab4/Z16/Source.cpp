#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int input;
	cout << "¬ведите значение от 1 до 100" << endl;
	cin >> input;
	if ((input > 100) || (input < 1))
	{
		cout << "ќшибка ввода, завершение работы программы" << endl;
	}
	system("pause");
	return 0;
}