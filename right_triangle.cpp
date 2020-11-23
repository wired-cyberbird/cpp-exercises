#include <iostream>
using namespace std;

int main()
{
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    cout << "input the three sides of a triangle: " << endl;
    cout << "insert side 1: ";
    cin >> side1;
    cout << "insert side 2: ";
    cin >> side2;
    cout << "insert side 3: ";
    cin >> side3;

    if((side3*side3) == ((side1*side1)+(side2*side2)))
        {
            cout << "Is a Right triangle." << endl;
        }
    else if((side1*side1) == ((side2*side2)+(side3*side3)))
        {
            cout << "Is a Right triangle." << endl;
        }
    else if((side2*side2) == ((side1*side1)+(side3*side3)))
        {
            cout << "Is a Right triangle." << endl;
        }
    else
    {
        cout << "Not is a Right triangle." << endl;
    }
  
}