#include <iostream>
using namespace std;

int main()
{
    double e = 1; // contain euler constant
    double x = 0; // contain x in formual e power of x
    double exponent = 1; // contain exponents of each precision degree
    double factorial = 0; // contain factorial of each precision degree
    int precision = 0; // precision degree of euler formula
    int counter = 1; // counter of outerloop
    int powercounter = 1; // counter of power loop
    int power = 1; // contain power of x

    /* set precision of the formula */
    cout << "please insert number to set euler formula precision : ";
    cin >> precision;
    cout << "set the x in the formula constant euler for power of x: ";
    cin >> x;

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
        
        /* power of x */
        while(powercounter <= counter)
        {
            power = power * x;
            cout << "x power of precision " << power << endl;
            powercounter++;
        }


        /* apply the euler power constant formula */
        e += (power/factorial);

        counter++;
    }
    
    cout << "euler constant is equal to " << e << endl;
}