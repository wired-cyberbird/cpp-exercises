#include <iostream>
using namespace std;

int main()
{
    double side1 = 0;
    double side2 = 0;
    double side3 = 0;

    cout << "input the three sides of a triangle: " << endl;
    cout << "insert side 1: ";
    cin >> side1;
    cout << "insert side 2: ";
    cin >> side2;
    cout << "insert side 3: ";
    cin >> side3;

    if(side1 + side2 > side3)
    {
        if(side2 + side3 > side1)
        {
            if(side3 + side1 > side2)
            {
                cout << "Is a valid triangle." << endl;
            }
            else
            {
                cout << "Not is a valid triangle." << endl;
            }
        }
        else
        {
            cout << "Not is a valid triangle." << endl;
        }
    }
    else
    {
        cout << "Not is a valid triangle." << endl;
    }
    
    
}