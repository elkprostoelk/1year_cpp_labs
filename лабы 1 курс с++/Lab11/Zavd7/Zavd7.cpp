#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	char str1[100], str2[100];
	cin.getline(str1, 100);
	cin.getline(str2, 100);
	int compare = strcmp(str1, str2);
	char str3[300];
	strcpy(str3, str1);
	strcat(str3, str2);
	if(compare<0)
		cout << "str1<str2" << endl;
	else if(compare==0)
		cout << "str1==str2" << endl;
	else cout << "str1>str2" << endl;
	cout << "length of str1+str2: " << strlen(str3) << endl;
	system("pause");
	return 0;
}