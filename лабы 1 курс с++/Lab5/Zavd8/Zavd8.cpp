#include<iostream>
using namespace std;
unsigned long int Perimeter(int, int);
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� 2 ������� ��������������: ";
	int a, b;
	cin >> a >> b;
	cout << Perimeter(a, b) << endl;
	system("pause");
	return 0;
}
unsigned long int Perimeter(int a, int b)
{
	return 2 * (a + b);
}