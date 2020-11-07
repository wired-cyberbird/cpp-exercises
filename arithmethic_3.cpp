#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    
    cout << "Enter three integers to compare: ";
    cin >> number1 >> number2 >> number3;

    cout << "Sum is " << number1 + number2 + number3 << endl;
    cout << "Average is " << (number1 + number2 + number3)/3 << endl;
    cout << "Product is " << number1 * number2 * number3 << endl;

    if(number1 >= number2)
        if(number1 >= number3)
            cout << "Largest is " << number1 << endl;

    if(number2 >= number1)
        if(number2 >= number3)
            cout << "Largest is " << number2 << endl;

    if(number3 >= number1)
        if(number3 >= number2)
            cout << "Largest is " << number3 << endl;

    if(number1 <= number2)
        if(number1 <= number3)
            cout << "Smallest is " << number1 << endl;

    if(number2 <= number1)
        if(number2 <= number3)
            cout << "Smallest is " << number2 << endl;

    if(number3 <= number1)
        if(number3 <= number2)
            cout << "Smallest is " << number3 << endl;
    
}