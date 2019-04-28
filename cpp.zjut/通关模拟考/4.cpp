#include<iostream>
#include<string>
#include<cmath>
#include<sstream>
using namespace std;

class Date
{
private:
    int year;
    int month;
    int day;
public:
    Date(){}
    Date(int year,int month,int day):year(year),month(month),day(day){}
    friend int days(Date a, Date b);
};

int days(Date a, Date b)
{
    int day1 = 0;
    Date temp;
    if ((a.year < b.year) || ((a.year == b.year) && (a.month < b.month)) || ((a.year == b.year) && (a.month == b.month) && (a.day < b.day)))
    {
        temp = a;
        a = b;
        b = temp;//保证a比b日期靠后
    }
    if (a.year != b.year)
    {
        day1 += (a.year - b.year - 1) * 365;//不考虑闰年和不完整年的整年天数
        day1 += ((((a.year - 1) / 4) - ((a.year - 1) / 100) + ((a.year - 1) / 400)) - (((b.year - 1) / 4) - ((b.year - 1) / 100) + ((b.year - 1) / 400)));//期间闰年天数
        for (int i = b.month; i <= 12; i++)
        {
            switch (i)
            {
            case 1:
            {
                day1 += 31;
                break;
            }
            case 2:
            {
                day1 += 28;
                break;
            }
            case 3:
            {
                day1 += 31;
                break;
            }
            case 4:
            {
                day1 += 30;
                break;
            }
            case 5:
            {
                day1 += 31;
                break;
            }
            case 6:
            {
                day1 += 30;
                break;
            }
            case 7:
            {
                day1 += 31;
                break;
            }
            case 8:
            {
                day1 += 31;
                break;
            }
            case 9:
            {
                day1 += 30;
                break;
            }
            case 10:
            {
                day1 += 31;
                break;
            }
            case 11:
            {
                day1 += 30;
                break;
            }
            case 12:
            {
                day1 += 31;
                break;
            }
            }
        }
        day1 -= b.day;
        for (int i = a.month - 1; i >= 1; i--)
        {
            switch (i)
            {
            case 1:
            {
                day1 += 31;
                break;
            }
            case 2:
            {
                day1 += 28;
                break;
            }
            case 3:
            {
                day1 += 31;
                break;
            }
            case 4:
            {
                day1 += 30;
                break;
            }
            case 5:
            {
                day1 += 31;
                break;
            }
            case 6:
            {
                day1 += 30;
                break;
            }
            case 7:
            {
                day1 += 31;
                break;
            }
            case 8:
            {
                day1 += 31;
                break;
            }
            case 9:
            {
                day1 += 30;
                break;
            }
            case 10:
            {
                day1 += 31;
                break;
            }
            case 11:
            {
                day1 += 30;
                break;
            }
            case 12:
            {
                day1 += 31;
                break;
            }
            }
        }
        day1 += a.day;
        if (((b.year % 4 == 0 && b.year % 100 != 0) || (b.year % 400 == 0)) && (b.month > 2))
            day1 -= 1;
        if (((a.year % 4 == 0 && a.year % 100 != 0) || (a.year % 400 == 0)) && (a.month > 2))
            day1 += 1;
    }
    else
    {
        for (int i = b.month; i < a.month; i++)
        {
            switch (i)
            {
            case 1:
            {
                day1 += 31;
                break;
            }
            case 2:
            {
                day1 += 28;
                break;
            }
            case 3:
            {
                day1 += 31;
                break;
            }
            case 4:
            {
                day1 += 30;
                break;
            }
            case 5:
            {
                day1 += 31;
                break;
            }
            case 6:
            {
                day1 += 30;
                break;
            }
            case 7:
            {
                day1 += 31;
                break;
            }
            case 8:
            {
                day1 += 31;
                break;
            }
            case 9:
            {
                day1 += 30;
                break;
            }
            case 10:
            {
                day1 += 31;
                break;
            }
            case 11:
            {
                day1 += 30;
                break;
            }
            case 12:
            {
                day1 += 31;
                break;
            }
            }
        }
        day1 += a.day;
        day1 -= b.day;
        if (b.month == 2 && b.day == 29)
            day1++;
        if (((a.year % 4 == 0 && a.year % 100 != 0) || (a.year % 400 == 0)) && (b.month <= 2 && b.day != 29 && a.month > 2))
        {
            day1++;
        }
    }
    return day1;
}

int main() 
{
    string line;
    while (getline(cin,line) && !cin.eof())
    {
        istringstream istr(line);
        int year, month, day;
        istr >> year >> month >> day;

        int nday = days(Date(1999, 1, 1), Date(year, month, day));

        cout << ceil(abs(nday) / 7.0) << endl;
    }

    return 0;
}