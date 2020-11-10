#include <iostream>

using namespace std;

int main()
{
    char character; 

    cout << "Insert character to read integer representation " << endl;
    cin >> character;

    cout << static_cast< int >(character);
}