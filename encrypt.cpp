#include <iostream>
using namespace std;

int main()
{
    int data = 0;
    cout << "Insert four digits number to encrypt : ";
    cin >> data;

    /* extract digits */
    int thousand = data;
    int hundred = data%1000;
    int tens = hundred%100;
    int ones = tens%10;

    int first = thousand/1000;
    int second = hundred/100;
    int third = tens/10;
    int forth = ones%10;
    
    /* sum and divide digits */
    int addition = 7;
    int division = 10;
    int e_first = (first + addition)%division;
    int e_second = (second + addition)%division;
    int e_third = (third + addition)%division;
    int e_forth = (forth + addition)%division;

    /* swap digits */
    int swap_f = e_third;
    int swap_s = e_forth;
    int swap_t = e_first;
    int swap_ft = e_second;

    /* display encrypted number */
    cout << "encrypted value is : " << swap_f << swap_s << swap_t << swap_ft << endl;

}