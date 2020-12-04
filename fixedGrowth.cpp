#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    
    double rate = 0.02;

    cout << "Year" << setw(21) << "Amount on users" << endl;

    cout << fixed << setprecision(2);

    for(int count = 0; count <= 3; count++)
    {
        cout << "compound interest at " << rate*100 << "%" << endl;

        double users = 1000000000;
        
        for(unsigned int year = 1; users <= 2500000000 ; year++)
        {
            users += users * rate;

            cout << setw(4) << year << setw(27) << users << endl;
        }

        rate = rate + 0.01;

    }
}