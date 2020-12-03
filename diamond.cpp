#include <iostream>
using namespace std;

int main()
{
    int n,c,k,space = 1;
    cout << "\n\nEnter number of rows: ";
    cin>>n;
    space = n - 1;

    // print diamond upper part
    for(k = 1; k <= n; k++)
    {
        // print spaces
        for(c = 1; c <= space; c++)
        {
            cout << " ";
        }

        space--;
        
        // print asterisc
        for(c = 1; c <= 2*k-1; c++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    space = 1;

    // print diamond lower part
    for(k = 1; k <= n - 1; k++)
    {
        for(c = 1; c <= space; c++)
        {
            cout << " ";
        }

        space++;

        // print asteriscs
        for(c = 1; c <= 2*(n-k)-1; c++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}