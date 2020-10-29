#include <iostream>
using namespace std;
float dilen(float, float);
int main()
{
	cout << dilen(6, 0);
	return 0;
}
float dilen(float a, float b)
{
	float res = 0;
	if (b != 0)
		res = a / b;
	return res;
}