#include <iostream>
using namespace std;

int main()
{
    // intitalize variables
    double hoursWorked = 0;
    double hourlyRate = 0;
    double salary = 0;

    while (hoursWorked != 1)
    {
        cout << "Enters hours worked (-1 to end): ";
        cin >> hoursWorked;
        if(hoursWorked == -1)
        {
            exit(0);
        }
        cout << "Enter hourly rate of the employee ($00.00): ";
        cin >> hourlyRate;

        // calculate salary
        if(hoursWorked <= 40)
        {
            salary = hourlyRate * hoursWorked;
        }
        else if (hoursWorked > 40)
        {
            salary = hourlyRate * 40;
            cout << salary;
            salary = salary + ((hoursWorked - 40)*(hourlyRate + (hourlyRate/2)));
        }

        cout << "Salary is " << salary << endl;
        

        
    }
    
}