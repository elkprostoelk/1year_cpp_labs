#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	char city[] = "Kherson ", region[] = "Dneprovskij rn. ", street[] = "Krymskaia str. ", house[] = "138 ", flat[] = "10";
	char address[100] = "";
	strcat(address, city);
	strcat(address, region);
	strcat(address, street);
	strcat(address, house);
	strcat(address, flat);
	cout << address << endl;
	cout << "Size of <city>: " << strlen(city) << endl;
	cout << "Size of <region>: " << strlen(region) << endl;
	cout << "Size of <street>: " << strlen(street) << endl;
	cout << "Size of <house>: " << strlen(house) << endl;
	cout << "Size of <flat>: " << strlen(flat) << endl;
	cout << "Size of <address>: " << strlen(address) << endl;
	char max[100]="", min[100]="";
	if (strlen(city) > strlen(region)) 
	{ 
		strcat(max, city);
		strcat(min, region);
		cout << "<city> is bigger than <region>" << endl;
	}
	else if (strlen(city) < strlen(region)) 
	{ 
		strcat(min, city);
		strcat(max, region);
		cout << "<city> is smaller than <region>" << endl;
	}
	else cout << "This strings are of the same length" << endl;
	system("pause");
	return 0;
}