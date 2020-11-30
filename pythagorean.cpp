#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Right Side" << setw(10) << "Side1" << setw(10) << "Side2" << endl;

    for (int side1 = 1; side1 <= 500; side1++)
    {

        for (int side2 = 1; side2 <= 500; side2++)
        {
            for (int side3 = 1; side3 <= 500; side3++)
            {
                int side3pow2 = side3 * side3;
                int side1pow2 = side1 * side1;
                int side2pow2 = side2 * side2;

                if (side3pow2 == (side1pow2 + side2pow2))
                {
                    cout << side3 << setw(15) << side1 << setw(10) << side2 << endl;
                }
                
            }
            
        }
        
    }
    
}