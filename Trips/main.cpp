#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << "Enter miles driven or -1 to quit: ";
    int milles = 0;
    cin >> milles;
    cout << milles << endl;
    if(milles == -1)
    {
        return 0;
    }
    else
    {
        cout << "Enter Gallons used: ";
        int gallons = 0;
        cin >> gallons;
        cout << "MPG this trip: ";
        cout << " " << static_cast<double>(milles) / gallons << endl;
        int totalMilles = milles;
        int totalGallons = gallons;
        cout << "\nTotal MPG: " << static_cast<double>(totalMilles)/totalGallons << endl;
        cout << setprecision(2) << fixed;
   
        while (milles != -1)
        {
            cout << "Enter miles driven or -1 to quit: ";
            cin >> milles;
            if(milles == -1)
            {
                cout << "Exiting." << endl;
                break;
            }
            cout << "Enter Gallons used: ";
            cin >> gallons;
            cout << "MPG this trip: ";
            cout << " " << static_cast<double>(milles)/gallons;
            totalMilles = totalMilles + milles;
            totalGallons = totalGallons + gallons;
            cout << "Total MPG: " << static_cast<double>(totalMilles)/totalGallons << endl;
            cout << setprecision(2) << fixed;
        }
    }
    
    return 0;    
}