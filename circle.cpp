#include <iostream> // allows program to output data to the screen

using namespace std;

int main()
{
    int radius = 0;

    cout << "Enter radius of circle : " << endl;
    cin >> radius;

    float pi = 3.14159;

    cout << "Circunference of the circle : " << 2*pi*radius << endl;
    cout << "Diameter of the circle : " << radius*radius << endl;
    cout << "Area of circle : " << pi*radius*radius << endl;

}
