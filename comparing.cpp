
#include <iostream> 

using namespace std;

int main()
{
int number1 = 0; // first integer to compare (initialized to 0)
int number2 = 0; // second integer to compare (initialized to 0)
cout << "Enter two integers to compare: "; // prompt user for data
cin >> number1 >> number2; // read two integers from user
if ( number1 == number2 )
cout << "These numbers are equal" << endl;
if ( number1 != number2 )
    if(number1 > number2)
        cout << number1 << " is larger" << endl;
    if(number2 > number1)
        cout << number2 << " is larger" << endl;
} // end function main