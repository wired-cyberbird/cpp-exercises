#include <iostream>
using namespace std;

int main()
{
    double sales = 0;
    double salary = 200;
    

    while(sales != -1)
    {
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales;
        if(sales == -1)
        {
            exit(0);
        }
        double commission = sales * 0.09;
        double totalSalary = salary + commission;
        cout << "Salary is: " << totalSalary << endl;
    }
}