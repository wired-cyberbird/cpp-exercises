#include <iostream>
using namespace std;

int main()
{
    int digit1 = 0;
    int digit2 = 0;
    int digit3 = 0;
    int digit4 = 0;

    cout << "insert four digits binary number" << endl;
    cin >> digit1;
    cin >> digit2;
    cin >> digit3; 
    cin >> digit4;

    cout << "decimal number is : " << endl;

    int decimal = (digit4 * 1) + (digit3 * 2) + (digit2 * 4) + (digit1 * 8);

    cout << decimal << endl;
}