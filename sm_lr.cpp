#include <iostream>

using namespace std;

int main()
{
    int number1 = 0, number2 = 0, number3 = 0, number4 = 0, number5 = 0;

    cout << "Enteger 5 integers to compare " << endl;
    cin >> number1 >> number2 >> number3 >> number4 >> number5;

    if(number1 < number2)
        if(number1 < number3)
            if(number1 < number4)
                if(number1 < number5)
                    cout << " " << number1 << " is the smallest number";

    if(number2 < number1)
        if(number2 < number3)
            if(number2 < number4)
                if(number2 < number5)
                    cout << " " << number2 << " is the smallest number";

    if(number3 < number1)
        if(number3 < number2)
            if(number3 < number4)
                if(number3 < number5)
                    cout << " " << number3 << " is the smallest number";

    if(number4 < number1)
        if(number4 < number2)
            if(number4 < number3)
                if(number4 < number5)
                    cout << " " << number4 << " is the smallest number";

    if(number5 < number1)
        if(number5 < number2)
            if(number5 < number3)
                if(number5 < number4)
                    cout << " " << number5 << " is the smallest number";

    if(number1 > number2)
        if(number1 > number3)
            if(number1 > number4)
                if(number1 > number5)
                    cout << " " << number1 << " is the largest number";

    if(number2 > number1)
        if(number2 > number3)
            if(number2 > number4)
                if(number2 > number5)
                    cout << " " << number2 << " is the largest number";

    if(number3 > number1)
        if(number3 > number2)
            if(number3 > number4)
                if(number3 > number5)
                    cout << " " << number3 << " is the largest number";

    if(number4 > number1)
        if(number4 > number2)
            if(number4 > number3)
                if(number4 > number5)
                    cout << " " << number4 << " is the largest number";

    if(number5 > number1)
        if(number5 > number2)
            if(number5 > number3)
                if(number5 > number4)
                    cout << " " << number5 << " is the largest number";


}