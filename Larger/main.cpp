#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    int number = 0;
    int largest = 0;
    largest = number;

    while(counter < 10)
    {
        cout << "Enter 10 numbers to compare : ";
        cin >> number;
        
        if(largest < number)
        {
            largest = number;
        }

        counter++;
    }

    cout << "The largest number is " << largest << endl;
}