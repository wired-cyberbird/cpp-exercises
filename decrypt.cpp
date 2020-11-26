#include <iostream>
using namespace std;

int main()
{
    int encrypted_data = 0;
    cout << "Insert four digits number to decrypt : ";
    cin >> encrypted_data;

    /* extract digits */
    int thousand = encrypted_data;
    int hundred = encrypted_data%1000;
    int tens = hundred%100;
    int ones = tens%10;

    int first = thousand/1000;
    int second = hundred/100;
    int third = tens/10;
    int forth = ones%10;

    /* sort digits */

    int s_first = third;
    int s_second = forth;
    int s_third = first;
    int s_forth = second;

    /* decrypt */

    int d_first = 0;
    int d_second = 0;
    int d_third = 0;
    int d_forth = 0;

    if(s_first < 7)
    {
        d_first = (s_first + 10) - 7;
    }
    else if (s_first >= 7)
    {
        d_first = s_first - 7;
    }

    if(s_second < 7)
    {
        d_second = (s_second + 10) - 7;
    }
    else if (s_second >= 7)
    {
        d_second = s_second - 7;
    }

    if(s_third < 7)
    {
        d_third = (s_third + 10) - 7;
    }
    else if (s_third >= 7)
    {
        d_third = s_third - 7;
    }

    if(s_forth < 7)
    {
        d_forth = (s_forth + 10) - 7;
    }
    else if (s_forth >= 7)
    {
        d_forth = s_forth - 7;
    }

    /* concat digits */
    int second_c = d_first * 10 + d_second;
    int third_c = second_c * 10 + d_third;
    int concated_number = third_c * 10 + d_forth;

    cout << "decrypted value is : ";
    cout << concated_number << endl;

}