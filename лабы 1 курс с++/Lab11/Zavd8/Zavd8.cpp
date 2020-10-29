#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	if (s1 < s2)
		cout << "s1<s2" << endl;
	else if (s1 == s2)
		cout << "s1==s2" << endl;
	else cout << "s1>s2" << endl;
	string s3 = s1 + s2;
	cout << "length of s1+s2: " << s3.size() << endl;
	system("pause");
	return 0;
}