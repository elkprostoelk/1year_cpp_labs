#include<iostream>
using namespace std;
typedef unsigned int UINT;
enum Month
{
	Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};
class Date
{
private:
	UINT day;
	UINT month;
	UINT year;
	bool IsMonth(UINT m)
	{
		if (m > 0 && m <= 12) return true;
		else return false;
	}
	bool IsDay(UINT d)
	{
		if (month == Month::Feb && d <= 28) return true;
		else if (month == Month::Feb && IsLeapYear() && d <= 29) return true;
		else if ((month <= Month::Jul && month % 2 != 0 && d <= 31) || (month >= Month::Aug && month <= Month::Dec && month % 2 != 0 && d <= 30)) return true;
		else if ((month < Month::Jul && month % 2 == 0 && d <= 30) || (month >= Month::Aug && month <= Month::Dec && month % 2 == 0 && d <= 31)) return true;
		else return false;
	}
	bool IsLeapYear()
	{
		if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) return false;
		else return true;
	}
	string NameMonth(UINT m)
	{
		switch (m)
		{
			case Month::Jan: return "Jan"; break;
			case Month::Feb: return "Feb"; break;
			case Month::Mar: return "Mar"; break;
			case Month::Apr: return "Apr"; break;
			case Month::May: return "May"; break;
			case Month::Jun: return "Jun"; break;
			case Month::Jul: return "Jul"; break;
			case Month::Aug: return "Aug"; break;
			case Month::Sep: return "Sep"; break;
			case Month::Oct: return "Oct"; break;
			case Month::Nov: return "Nov"; break;
			case Month::Dec: return "Dec"; break;
		}
	}
public:
	void setDay()
	{
		cout << "Enter the day" << endl;
		cin >> day;
		if (!IsDay(day))
		{
			while (!IsDay(day))
			{
				cout << "INPUT ERROR. TRY AGAIN ";
				cin >> day;
			}
		}
	}
	void setMonth()
	{
		cout << "Enter the month" << endl;
		cin >> month;
		if (!IsMonth(month))
		{
			while (!IsMonth(month))
			{
				cout << "INPUT ERROR. TRY AGAIN ";
				cin >> month;
			}
		}
	}
	void setYear()
	{
		cout << "Enter the year" << endl;
		cin >> year;
	}
	UINT getDay()
	{
		return day;
	}
	UINT getMonth()
	{
		return month;
	}
	UINT getYear()
	{
		return year;
	}
	void ddmmyy()
	{
		int y = year % 100;
		cout << day << "." << month << "." << y << endl;
	}
	void ddmmyyyy()
	{
		cout << day << "/" << month << "/" << year << endl;
	}
	void mmmddyyyy()
	{
		cout << NameMonth(month) << " - " << day << " - " << year << endl;
	}
	Date()
	{
		setYear(); setMonth(); setDay();
	}
	Date(UINT d, UINT m, UINT y)
	{
		day = d; month = m; year = y;
		if (!IsDay(day))
		{
			while (!IsDay(day))
			{
				cout << "INPUT ERROR. TRY AGAIN ";
				cin >> day;
			}
		}
		if (!IsMonth(month))
		{
			while (!IsMonth(month))
			{
				cout << "INPUT ERROR. TRY AGAIN ";
				cin >> month;
			}
		}
	}
	Date(UINT d, UINT m)
	{
		day = d; month = m; year = 2019;
		if (!IsDay(day))
		{
			while (!IsDay(day))
			{
				cout << "INPUT ERROR. TRY AGAIN ";
				cin >> day;
			}
		}
		if (!IsMonth(month))
		{
			while (!IsMonth(month))
			{
				cout << "INPUT ERROR. TRY AGAIN ";
				cin >> month;
			}
		}
	}
	~Date()
	{
		cout << "Deleted" << endl;
	}
};
void main()
{
	UINT day, month, year;
	cin >> day >> month >> year;
	Date date1;
	Date date2(13, 2);
	Date date3(day, month, year);
	cout << date1.getDay() << " " << date1.getMonth() << " " << date1.getYear() << endl;
	date1.ddmmyyyy();
	date2.ddmmyy();
	date3.mmmddyyyy();
	system("pause");
}