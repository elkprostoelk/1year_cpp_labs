#include<iostream>
#include<ctime>
using namespace std;
void PrintArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % 6 == 0 && i != 0)
		{
			cout << arr[i] << endl;
		}
		else cout << arr[i] << "\t";
	}
	cout << endl;
}
int sum(int arr[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + arr[i];
	}
	return s;
}
double sredZn(int arr[], int n)
{
	return (double)sum(arr,n) / n;
}
int evenNumbers(int arr[], int n)
{
	 int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0) k++;
	}
	return k;
}
int oddNumbers(int arr[], int n)
{
	 int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0) k++;
	}
	return k;
}
int maxElement(int arr[], int n)
{
	 int max = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[max]) max = i;
	}
	return max;
}
int minElement(int arr[], int n)
{
	 int min = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < arr[min]) min = i;
	}
	return min;
}
int main()
{
	srand(time(0)); const int n = 1000;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + rand() % 100;
	}
	PrintArr(arr,n);
	for (int& i : arr)
	{
		i = i * 2;
	}
	PrintArr(arr,n);
	for (int& i : arr)
	{
		i = i / 2;
	}
	cout << "even numbers: " << evenNumbers(arr,n) << ", odd numbers: " << oddNumbers(arr,n) << endl;
	cout << "max element is arr[" << maxElement(arr,n) << "]=" << arr[maxElement(arr,n)] << endl;
	cout << "min element is arr[" << minElement(arr,n) << "]=" << arr[minElement(arr,n)] << endl;
	cout << "Sum=" << sum(arr,n) << "; average=" << sredZn(arr,n) << endl;
	system("pause");
	return 0;
}