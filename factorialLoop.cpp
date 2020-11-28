#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    long int factorial = 0;

    cout << "please insert number to extract factorial : ";
    cin >> number;

    if(number == 0)
    {
        factorial = 1;
        cout << "factorial of zero is : " << factorial << endl;
    }
    else if (number == 1)
    {
        factorial = 1;
        cout << "factorial of one is : " << factorial << endl;
    }
    else
    {
        
        factorial = number;
        for (int counter = 1;counter < number;counter++)
        {
            factorial *= (number-counter);
        }

        cout << "factorial of " << number << " is : " << factorial << endl;
    }
    

}