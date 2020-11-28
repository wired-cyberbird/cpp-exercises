#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double amount = 0;
    double principal = 0;
    double rate = 0.05;

    cout << "Please insert initial deposit of investment: ";
    cin >> principal;

    cout << "Year" << setw(21) << "Amount on deposit" << endl;

    cout << fixed << setprecision(2);

    for(int count = 0; count <= 5; count++)
    {
        cout << "compound interest at " << rate*100 << "%" << endl;

        for(unsigned int year = 1; year <= 10; year++)
        {
            amount += principal * pow(1.0 + rate, year);

            cout << setw(4) << year << setw(21) << amount << endl;
        }

        rate = rate + 0.01;

    }
}