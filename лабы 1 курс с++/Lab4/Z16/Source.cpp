#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int input;
	cout << "������� �������� �� 1 �� 100" << endl;
	cin >> input;
	if ((input > 100) || (input < 1))
	{
		cout << "������ �����, ���������� ������ ���������" << endl;
	}
	system("pause");
	return 0;
}