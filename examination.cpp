#include <iostream>
using namespace std;

int main()
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    int studentCounter = 1;
    unsigned int result = 0;

    while( studentCounter <= 10)
    {
        cout << "Enter result (1 = pass, 2 = fail): ";
        cin >> result;

        if(result != 1)
        {
            if(result != 2)
            {
                cout << "Enter result (1 = pass, 2 = fail): ";
                cin >> result;
                studentCounter--;
                studentCounter++;
            }
        }

        if( result == 1)
        {
            passes = passes + 1;
        }
        else if (result == 2)
        {
            failures = failures + 1;
        }

        studentCounter = studentCounter + 1;
        
    }

    cout << "Passed " << passes << "\nFailed " << failures << endl;

    if( passes > 8)
    {
        cout << "Bonus to instructor!" << endl;
    }

    if(passes + failures != 10)
    {
        cout << "Please repeat again and only input 1 or 2 in the results"
    }

}