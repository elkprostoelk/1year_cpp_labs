#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[1000];
	cin >> str;
	int strtoint = atoi(str);
	long strtolong = atol(str);
	float strtofloat = atof(str);
	cout << strtoint << "\t" << strtolong << "\t" << strtofloat << endl;
	system("pause");
	return 0;
}