#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;

    cout << "Enter numbers to evaluate : ";
    cin >> number1 >> number2;

    if(number1 % number2 == 0)
        cout << number1 << " is multiple of " << number2 << ". ";
    if(number1 % number2 != 0)
        cout << number1 << " is not multiple of " << number2 << ". ";
}