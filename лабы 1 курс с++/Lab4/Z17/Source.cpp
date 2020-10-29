#include <iostream>
using namespace std;
int rizn(unsigned int, unsigned int);
int main()
{
	unsigned int a, b;
	cin >> a >> b;
	cout << rizn(a, b);
	system("pause");
	return 0;
}
int rizn(unsigned int a, unsigned int b)
{
	unsigned int result = 0;
	if (a >= b)
		result = a - b;
	return result;
}