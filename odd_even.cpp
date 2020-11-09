#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cout << "Enter number to evaluate : " << endl;
    cin >> number;

    if(number % 2 == 0)
        cout << number << " is even. " << endl;
    if(number % 2 != 0)
        cout << number << " is odd. " << endl;
}