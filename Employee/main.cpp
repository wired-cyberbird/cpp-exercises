#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee Agent("James", "Miller", 1500);
    Employee Overseer("Alex", "Brinks", 4500);

    cout << "Profile of Agent : "
        << "\nFirst Name: " << Agent.getFirstName()
        << "\nLast Name: " << Agent.getLastName()
        << "\nMonthly Salary: " << Agent.getMonthlySalary()
        << "\nAnnual Salary: " << Agent.getAnnualSalary()
        << "\nBonus: " << Agent.getBonus()
        << "\nTotal Annual Income: " << Agent.getAnnualSalary() + Agent.getBonus() << endl;

    cout << endl;

    cout << "Profile of Overseer : "
        << "\nFirst Name: " << Overseer.getFirstName()
        << "\nLast Name: " << Overseer.getLastName()
        << "\nMonthly Salary: " << Overseer.getMonthlySalary()
        << "\nAnnual Salary: " << Overseer.getAnnualSalary()
        << "\nBonus: " << Overseer.getBonus()
        << "\nTotal Annual Income: " << Overseer.getAnnualSalary() + Overseer.getBonus() << endl;
}