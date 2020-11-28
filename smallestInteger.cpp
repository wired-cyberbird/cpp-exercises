#include <iostream>
using namespace std;

int main()
{
    int numbers = 0;
    int count = 0;
    int largest = 0;
    cout << "Insert how many numbers to sum: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "Insert numbers to compare: ";
        cin >> numbers;

        if(largest < numbers)
        {
            largest = numbers;
        }


    }

    cout << "the largest number is : " << largest << endl;
    
}