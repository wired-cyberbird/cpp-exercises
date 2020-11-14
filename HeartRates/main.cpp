#include <iostream>
#include "HeartRates.h"
using namespace std;

int main()
{
    HeartRates Patient1("Jhon", "Doe",17,4,1996);

    cout << "First name: " << Patient1.getFirstName()
        << "\nLast name: " << Patient1.getLastName()
        << "\nDate Of Birth: " << Patient1.getDay() << "/" << Patient1.getMonth() << "/" << Patient1.getYear()
        << "\nAge: " << Patient1.getAge()
        << "\nMaximum Heart Rate: " << Patient1.getMaximumHeartRate()
        << "\nTarget Heart Rate: " << Patient1.getTargetHeartRate() << endl; 
}