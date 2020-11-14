#include <iostream>
#include "HealthProfile.h"
using namespace std;

HealthProfile::HealthProfile(string fname,string lname,string g,float d,float m,float y,float h,float w)
{
    setFirstName(fname);
    setLastName(lname);
    setGender(g);
    setDay(d);
    setMonth(m);
    setYear(y);
    setHeight(h);
    setWeight(w);
}

void HealthProfile::setFirstName(string fname)
{
    firstName = fname;
}

void HealthProfile::setLastName(string lname)
{
    lastName = lname;
}

void HealthProfile::setGender(string g)
{
    gender = g;
}

void HealthProfile::setDay(float d)
{
    day = d;
}

void HealthProfile::setMonth(float m)
{
    month = m;
}

void HealthProfile::setYear(float y)
{
    year = y;
}

void HealthProfile::setHeight(float h)
{
    height = h;
}

void HealthProfile::setWeight(float w)
{
    weight = w;
}

string HealthProfile::getFirstName() const
{
    return firstName;
}

string HealthProfile::getLastName() const
{
    return lastName;
}

string HealthProfile::getGender() const
{
    return gender;
}

float HealthProfile::getDay() const
{
    return day;
}

float HealthProfile::getMonth() const
{
    return month;
}

float HealthProfile::getYear() const
{
    return year;
}

float HealthProfile::getHeight() const
{
    return height;
}

float HealthProfile::getWeight() const
{
    return weight;
}

float HealthProfile::getAge() const
{
    float current_day, current_month, current_year;
    cout << "Please insert actual date: " << endl;
    cin >> current_day; 
    cin >> current_month; 
    cin >> current_year;

    float birthdayDateDays = getDay() + (30*getMonth()) + (getYear()*365);
    float currentDateDays = current_day + (30*current_month) + (current_year*365);
    float age = (currentDateDays - birthdayDateDays)/365;

    return age;
}

float HealthProfile::getMaximumHeartRate() const
{
    return 220-getAge();
}

float HealthProfile::getTargetHeartRate() const
{
    return (getMaximumHeartRate()/10) * 8;
}