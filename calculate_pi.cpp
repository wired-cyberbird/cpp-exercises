#include <iostream>
using namespace std;

int main()
{
    double pi = 0;
    double i = 1;
    for (int count = 1; count <= 500; count++)
    {
        pi += 4/i;
        cout << "pi + 4 / " << i << " : " << pi << endl;
        i += 2;
        pi -= 4/i;
        cout << "pi - 4 / " << i << " : " << pi << endl;
        i += 2;
    }
    
}