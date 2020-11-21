#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cout << "insert five digits number" << endl;
    cin >> number;
    int first = number/10000;
    int second = number%10000;
    int third = second%1000;
    int forth = third%100;
    int fifth = forth%10;

    cout << first << "   " << second/1000 << "   " << third/100 << "   " << forth/10 << "   " << fifth << endl;

    if(first == fifth)
    {
        if(second/1000 == forth/10)
        {
            cout << "Is a palindrome. " << endl;
        }
    }
    else
    {
        cout << "Not is a palindrome. " << endl;
    }
}