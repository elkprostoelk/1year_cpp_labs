#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0)); const int n = 1000;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % 6 == 0 && i != 0)
		{
			cout << arr[i] << endl;
		}
		else cout << arr[i] << "\t";
	}
	cout << endl << endl << endl;
	for (int &i : arr)
	{
		i = i * 2;
	}
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % 6 == 0 && i != 0)
		{
			cout << arr[i] << endl;
		}
		else cout << arr[i] << "\t";
	}
	for (int& i : arr)
	{
		i = i / 2;
	}
	int s = 0, max = 0, min = 0, even = 0, odd = 0; double sr = 0.;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0) even++;
		else odd++;
		if (arr[i] > arr[max]) max = i;
		if (arr[i] < arr[min]) min = i;
		s = s + arr[i];
	}
	cout << endl;
	sr = (double)s / n;
	cout << "even numbers: " << even << ", odd numbers: " << odd << endl;
	cout << "max element is arr[" << max << "]=" << arr[max] << endl;
	cout << "min element is arr[" << min << "]=" << arr[min] << endl;
	cout << "Sum=" << s << "; average=" << sr << endl;
	system("pause");
	return 0;
}