#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
using namespace std;
double ToRadians(double a)
{
	return (a * M_PI) / 180.0;
}
int main()
{
	double a, b, alpha;
	cin >> a >> b >> alpha;
	alpha = ToRadians(alpha);
	double c = sqrt(a * a + b * b - 2. * a * b * cos(alpha));
	cout << c << endl;
	system("pause");
	return 0;
}