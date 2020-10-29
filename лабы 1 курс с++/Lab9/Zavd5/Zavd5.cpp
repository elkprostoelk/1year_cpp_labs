#define _USE_MATH_DEFINES
#include<iostream>
using namespace std;
double LengthOfCircle(double);
double SquareOfCircle(double);
double VolumeOfBall(double);
void LengthOfCirclevoid(double&);
void SquareOfCirclevoid(double&);
void VolumeOfBallvoid(double&);
int main()
{
	double r; cin >> r; double r2 = r, r3 = r;
	cout << LengthOfCircle(r) << "\t" << SquareOfCircle(r) << "\t" << VolumeOfBall(r) << endl;
	LengthOfCirclevoid(r); SquareOfCirclevoid(r2); VolumeOfBallvoid(r3);
	cout << r << "\t" << r2 << "\t" << r3 << endl;
	system("pause");
	return 0;
}
double LengthOfCircle(double r)
{
	return 2. * M_PI * r;
}
double SquareOfCircle(double r)
{
	return M_PI * r * r;
}
double VolumeOfBall(double r)
{
	return (4. / 3.) * M_PI * r * r * r;
}
void LengthOfCirclevoid(double& a)
{
	a = 2. * M_PI * a;
}
void SquareOfCirclevoid(double& a)
{
	a = M_PI * a * a;
}
void VolumeOfBallvoid(double& a)
{
	a = (4. / 3.) * M_PI * a * a * a;
}