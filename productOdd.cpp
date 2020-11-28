#include <iostream>
using namespace std;

int total = 1;

int main()
{
    for (int i = 1; i <= 15; i++)
    {
        if(i%2!=0)
        {
            total *= i;
            cout << "multiplication : " << i << endl;
        }
    }

    cout << "total de multiplication : " << total << endl;
}