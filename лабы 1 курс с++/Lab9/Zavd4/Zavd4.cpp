#include<iostream>
using namespace std;
double SquareOfNum(double);
void SquareOfNumvoid(double&);
double CubeOfNum(double);
void CubeOfNumvoid(double&);
double InverseNum(double);
void InverseNumvoid(double&);
int main()
{
	double a;
	cin >> a; double b = a, c = a;
	cout << SquareOfNum(a) << "\t" << CubeOfNum(a) << "\t" << InverseNum(a) << endl;
	SquareOfNumvoid(&a); cout << a << "\t";
	CubeOfNumvoid(b); cout << b << "\t";
	InverseNumvoid(c); cout << c << endl;
	system("pause");
	return 0;
}
double SquareOfNum(double a)
{
	return a * a;
}
void SquareOfNumvoid(double* a)
{
	*a = *a * *a;
}
double CubeOfNum(double a)
{
	return a * a * a;
}
void CubeOfNumvoid(double& a)
{
	a = a * a * a;
}
double InverseNum(double a)
{
	return 1./a;
}
void InverseNumvoid(double& a)
{
	a = 1./a;
}