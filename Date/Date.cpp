#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int d, int m, int y)
{
    setDay(d);
    setMonth(m);
    setYear(y);
}

void Date::setDay(int d)
{
    day = d;
}

void Date::setMonth(int m)
{
    if(m >= 1)
        if(m <= 12)
            month = m;
    
    if(m < 1)
        month = 1;

    if(m > 12)
        month = 1;
}

void Date::setYear(int y)
{
    year = y;
}

int Date::getDay() const
{
    return day;
}

int Date::getMonth() const
{
    return month;
}

int Date::getYear() const
{
    return year;
}

void Date::displayDate() const
{
    cout << day << "/" << month << "/" << year << endl;
}