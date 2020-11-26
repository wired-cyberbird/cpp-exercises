#include <iostream>
using namespace std;

int main()
{
    long int worldPopulation = 7800000000;
    double rateOfGrowth = 0.02;
    int year = 1;

    cout << "Table of world population growth." << endl;
    cout << "Year   " << "calcualted amount of population   " << endl;
    cout << year << "         " << worldPopulation << endl;
    year++;

    while(year < 75)
    {
        year++;
        worldPopulation += (worldPopulation * rateOfGrowth);
        if(year < 10)
        {
            cout << year << "         " << worldPopulation << endl;
        }
        else if (year >= 10)
        {
            cout << year << "        " << worldPopulation << endl;
        }
        
    }
}