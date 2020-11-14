#include <iostream>
#include "HeartRates.h"
using namespace std;

HeartRates::HeartRates(string fname,string lname,int d,int m,int y)
{
    setFirstName(fname);
    setLastName(lname);
    setDay(d);
    setMonth(m);
    setYear(y);
}

void HeartRates::setFirstName(string fname)
{
    firstName = fname;
}

void HeartRates::setLastName(string lname)
{
    lastName = lname;
}

void HeartRates::setDay(int d)
{
    day = d;
}

void HeartRates::setMonth(int m)
{
    month = m;
}

void HeartRates::setYear(int y)
{
    year = y;
}

string HeartRates::getFirstName() const
{
    return firstName;
}

string HeartRates::getLastName() const
{
    return lastName;
}

int HeartRates::getDay() const
{
    return day;
}

int HeartRates::getMonth() const
{
    return month;
}

int HeartRates::getYear() const
{
    return year;
}

int HeartRates::getAge() const
{
    int current_day, current_month, current_year;
    cout << "Please insert actual date: " << endl;
    cin >> current_day; 
    cin >> current_month; 
    cin >> current_year;

    int birthdayDateDays = getDay() + (30*getMonth()) + (getYear()*365);
    int currentDateDays = current_day + (30*current_month) + (current_year*365);
    int age = (currentDateDays - birthdayDateDays)/365;

    return age;
}

int HeartRates::getMaximumHeartRate() const
{
    return 220-getAge();
}

int HeartRates::getTargetHeartRate() const
{
    return (getMaximumHeartRate()/10) * 8;
}