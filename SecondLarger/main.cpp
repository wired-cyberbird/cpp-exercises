#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    int number = 0;
    int largest = 0;
    int secondLargest = 0;
    int previous = 0;
    largest = number;
    secondLargest = number;

    while(counter < 10)
    {
        cout << "Enter 10 numbers to compare : ";
        cin >> number;
        
        if(number > largest)
        {
            secondLargest = largest;
            largest = number;
        }
        else if (number > secondLargest)
        {
            secondLargest = number;
        }
        
        counter++;
    }

    cout << "The largest number is " << largest << " and the second largest is " << secondLargest << ". " << endl;
}