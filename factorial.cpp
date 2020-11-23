#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int factorial = 0;

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
        
        int counter = 1;
        factorial = number;
        while (counter < number)
        {
            factorial *= (number-counter);
            counter++;
        }

        cout << "factorial of " << number << " is : " << factorial << endl;
    }
    

}