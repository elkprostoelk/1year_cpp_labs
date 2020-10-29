#include<iostream>
using namespace std;
char ToLowerReg(char ch)
{
	return ch + 32;
}
char ToUpperReg(char ch)
{
	return ch - 32;
}
bool IsAlpha(char ch)
{
	if (((int)ch >= 65 && (int)ch <= 90) ||
		((int)ch >= 97 && (int)ch <= 122)) return true;
	else return false;
}
bool IsUpperReg(char ch)
{
	if ((int)ch >= 65 && (int)ch <= 90) return true;
	else return false;
}
bool IsLowerReg(char ch)
{
	if ((int)ch >= 97 && (int)ch <= 122) return true;
	else return false;
}
bool IsAlNumR(char ch)
{
	if (((int)ch >= 65 && (int)ch <= 90) ||
		((int)ch >= 97 && (int)ch <= 122) || 
		((int)ch >= 48 && (int)ch <= 57)) return true;
	else return false;
}
int main()
{
	system("pause");
	return 0;
}