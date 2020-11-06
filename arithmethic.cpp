#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    
    cout << "Enter two integers to compare: ";
    cin >> number1 >> number2;

    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
    cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
    cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
}