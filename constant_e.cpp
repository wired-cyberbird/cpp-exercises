#include <iostream>
using namespace std;

int main()
{
    double e = 1;
    double factorial = 0;
    int precision = 0;
    int counter = 1;

    /* set precision of the formula */
    cout << "please insert number to set euler formula precision : ";
    cin >> precision;

    /* calculate euler constant */
    while(counter <= precision)
    {
        cout << counter << "!";

        /* calculate factorial for each precision */
        if (counter == 1)
        {
            factorial = 1;
            cout << "factorial of one is : " << factorial << endl;
        }
        else
        {
        
            int innercounter = 1;
            factorial = counter;
            while (innercounter < counter)
            {
                factorial *= (counter-innercounter);
                innercounter++;
            }

            cout << "factorial of " << counter << " is : " << factorial << endl;
        }

        cout << "is equal to " << factorial << endl;

        /* apply the euler constant formula */
        e += (1/factorial);

        counter++;
    }
    
    cout << "euler constant is equal to " << e << endl;
}