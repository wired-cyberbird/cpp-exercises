#include <iostream>
using namespace std;

int main()
{
    // intialize variables
    int size = 0; // size of your square
    int counter = 0; // counter of loop top line of square
    int counter2 = 0; // counter of loop inside of square
    int counter4 = 0; // counter of loop bottom line of square
    

    cout << "please insert size : ";
    cin >> size;
    cout << "\n";

    // print * size times to make top line
    while(counter < size)
    {
        cout << "*";
        counter++;
    }

    cout << endl;
    // print side lines of square
    while (counter2 < size-2)
    {
        int counter3 = 0;
        cout << "*";
        while (counter3 < size-2)
        {
            cout << " ";
            counter3++;
        }
        cout << "*";
        cout << endl;
        counter2++;    
    }

    // print * size times to make bottom line
    while(counter4 < size)
    {
        cout << "*";
        counter4++;
    }

    cout << "\n";
    
}