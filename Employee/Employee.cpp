#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(string fname, string lname, int msalary)
{
    setFirstName(fname);
    setLastName(lname);
    setMonthlySalary(msalary);
}

void Employee::setFirstName(string fname)
{
    firstName = fname;
}

void Employee::setLastName(string lname)
{
    lastName = lname;
}

void Employee::setMonthlySalary(int msalary)
{
    monthlySalary = msalary;
}

string Employee::getFirstName() const
{
    return firstName;
}

string Employee::getLastName() const
{
    return lastName;
}

int Employee::getMonthlySalary() const
{
    return monthlySalary;
}

int Employee::getAnnualSalary() const
{
    return monthlySalary * 12;
}

int Employee::getBonus() const
{
    return (monthlySalary * 12)/10;
}