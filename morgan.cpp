#include <iostream>
using namespace std;

int main()
{
    int x = 6;
    int y = 5;
    cout << (!(x<5)&&!(y>=7)) << endl;
    cout << !(x<5||y>=7) << endl;
    int a = 2;
    int b = 3;
    int g = 5;
    cout << (!( a == b ) || !(g != 5)) << endl;
    cout << !( a == b && g!=5 ) << endl;
    cout << !( ( x <= 8 ) && ( y > 4 ) ) << endl;
    cout << ( !(x<=8) || ! (y > 4) ) << endl;
    int i = 3;
    int j = 8;
    cout << !( ( i > 4 ) || ( j <= 6 ) ) << endl;
    cout << ( !(i > 4) && !(j <= 6) ) << endl;
}