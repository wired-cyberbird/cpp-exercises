#include <iostream>
using namespace std;

int main()
{
    int counter = 0;

    cout << "\n";
    cout << "N" << "\t" << "10*N" << "\t" << "100*N" << "\t" << "1000*N" << endl;
    cout << "\n";

    while(counter < 5)
    {
        counter++;
        cout << counter << "\t" << counter * 10 << "\t" << counter * 100 << "\t" << counter * 1000 << endl;
    }

    cout << "\n";
}