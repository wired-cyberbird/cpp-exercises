#include <iostream>
using namespace std;

int main()
{
    int payCode = 0;
    double managerSalary = 0;
    double hoursWorked = 0;
    double hourlyRate = 0;
    double hourlySalary = 0;
    double fixed = 250;
    double sales = 0;
    double commisionRate = 0.057;
    double commisionSalary = 0;
    double pricePerPart = 0;
    double numberOfParts = 0;
    double pieceWorkerSalary = 0;

    while (payCode != -1)
    {
        cout << "Insert the paycode to select employee type : ";
        cin >> payCode;

        if(payCode == 1)
        {
            cout << "Insert salary : ";
            cin >> managerSalary;

            cout << "Manager Salary is : " << managerSalary << endl;
        }
        else if (payCode == 2)
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
                hourlySalary = hourlyRate * hoursWorked;
            }
            else if (hoursWorked > 40)
            {
                hourlySalary = hourlyRate * 40;
                hourlySalary = hourlySalary + ((hoursWorked - 40)*(hourlyRate + (hourlyRate/2)));
            }

            cout << "Salary is " << hourlySalary << endl;
        }
        else if (payCode == 3)
        {
            cout << "Enter the amount of weekly sales: ";
            cin >> sales;
            commisionSalary = fixed + (sales * commisionRate);
            cout << "Salary is : " << commisionSalary << endl;
        }
        else if (payCode == 4)
        {
            cout << "Enter the price per part : ";
            cin >> pricePerPart;
            cout << "Enter the number of parts : ";
            cin >> numberOfParts;
            pieceWorkerSalary = pricePerPart * numberOfParts;
            cout << "Salary is " << pieceWorkerSalary << endl;
        }
           

    }
    
}