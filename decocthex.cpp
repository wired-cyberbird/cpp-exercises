#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
    cout << "Decimal" << setw(7) << "Octal" << setw(14) << "hexadecimal" << endl;
    for (int i = 1; i <= 256; i++)
    {
        cout << setw(7) << dec << i << setw(7) << oct << i << setw(10) << hex << i << endl;
    }
}
