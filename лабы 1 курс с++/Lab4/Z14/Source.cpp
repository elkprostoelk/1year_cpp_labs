#include <iostream>
using namespace std;
int LessOfTwo(int, int);
int LessOfFive(int arr[], int size);
int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
		cin >> arr[i];
	int min = LessOfFive(arr,5);
	cout << min << endl;
	system("pause");
	return 0;
}
int LessOfTwo(int a, int b)
{
	if (a < b) return a;
	else return b;
}
int LessOfFive(int arr[], int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
	{
		min = LessOfTwo(min, arr[i]);
	}
	return min;
}