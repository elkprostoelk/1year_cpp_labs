#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	float earthshake; bool continueWork;
	do
	{
		cin >> earthshake;
		if (earthshake < 5) cout << "�����, ���� ���������" << endl;
		else if (earthshake >= 5 && earthshake < 5.5) cout << "������, ������� ����������" << endl;
		else if (earthshake >= 5.5 && earthshake < 6.5) cout << "�������� ���������� � ����������� ���" << endl;
		else if (earthshake >= 6.5 && earthshake < 7.5) cout << "����, ������ ������� � ���� ���������" << endl;
		else cout << "����������, �������� ������� � ������� ���������" << endl;
		cout << "����������? 1-���, 0-�: ";
		cin >> continueWork;
	} while (continueWork == true);
	system("pause");
	return 0;
}