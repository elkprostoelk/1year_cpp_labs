#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cin >> a >> b >> c;
	double d = b * b - 4. * a * c;
	if (d < 0)
	{
		cout << "Нет действительных корней!" << endl;
	}
	else if (d == 0)
	{
		double x = -b / (2. * a);
		cout << "x=" << x << endl;
	}
	else
	{
		double x1 = (-b + sqrt(d)) / (2. * a),
			x2 = (-b - sqrt(d)) / (2. * a);
		cout << "x1=" << x1 << "; x2=" << x2 << endl;
	}
	system("pause");
	return 0;
}