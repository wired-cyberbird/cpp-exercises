#include <iostream>
using namespace std;

int main()
{
    int maxcounter = 0;
    
    while(maxcounter < 4)
    {
        int counter = 0;
        while(counter < 8)
        {
            cout << "* ";
            counter++;
        }
        cout << endl;

        cout << " ";
        int counter2 = 0;
        while (counter2 < 8)
        {
            cout << "* ";
            counter2++;
        }

        cout << endl;

        maxcounter++;
    }

    cout << endl;

}