#include <iostream>
using namespace std;
double poundsToKilograms(double);
double poundsToGrams(double);
int main()
{
	return 0;
}
double poundsToKilograms(double pounds)
{
	return pounds * 0.453592;
}
double poundsToGrams(double pounds)
{
	return poundsToKilograms(pounds) * 1000;
}