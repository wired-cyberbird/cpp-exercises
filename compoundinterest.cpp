#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double amount = 0;
    double principal = 0;
    double rate = 0.05;
    unsigned int years = 0;

    cout << "Please insert initial deposit of investment: ";
    cin >> principal;
    cout << "insert years to calculate compound interest: ";
    cin >> years;

    cout << "Year" << setw(21) << "Amount on deposit" << endl;

    cout << fixed << setprecision(2);

    for(int count = 0; count <= 5; count++)
    {
        cout << "compound interest at " << rate*100 << "%" << endl;

        for(unsigned int year = 1; year <= years; year++)
        {
            amount += principal * pow(1.0 + rate, year);

            cout << setw(4) << year << setw(27) << amount << endl;
        }

        rate = rate + 0.01;

    }
}