#include<iostream>
#include<string>
using namespace std;
bool IsEqual(int a, int b)
{
	if (a == b) return true;
	else return false;
}
bool IsEqual(string a, string b)
{
	if (a == b) return true;
	else return false;
}
bool IsEqual(double a, double b)
{
	if (a == b) return true;
	else return false;
}
int main()
{
	int a, b; string s1, s2; double c, d;
	cin >> a >> b;
	cin >> c >> d;
	cin >> s1;
	cin >>s2;
	if (IsEqual(a, b)) cout << "a=b" << endl;
	else cout << "a!=b" << endl;
	if (IsEqual(s1, s2)) cout << "s1=s2" << endl;
	else cout << "s1!=s2" << endl;
	if (IsEqual(c, d)) cout << "c=d" << endl;
	else cout << "c!=d" << endl;
	system("pause");
	return 0;
}