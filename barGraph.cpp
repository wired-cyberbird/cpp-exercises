#include <iostream>
using namespace std;

int main()
{
    int numbers = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Insert number to graph : ";
        cin >> numbers;

        if(numbers > 1 && numbers < 30)
        {
            for(int j = 0; j < numbers; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "Please insert numbers between 1 and 30 when program init again, program exiting" << endl;
            return 0;
        }
        

        cout << endl;
    }
    
}