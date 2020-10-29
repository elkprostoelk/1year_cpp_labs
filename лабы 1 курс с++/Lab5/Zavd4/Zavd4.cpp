#include<iostream>
#include<time.h>;
using namespace std;
int main()
{
	srand(time(0));
	int a = rand()%100, b = rand()%100, c = rand()%100;
	cout << a << "\t" << b << "\t" << c << endl;
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	cout << max << endl;
	system("pause");
	return 0;
}