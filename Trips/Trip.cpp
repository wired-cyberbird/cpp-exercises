# include <iostream>
# include <iomanip>
# include "Trip.h"

using namespace std;

Trip::Trip()
{

}

 Trip::getMillesPerGallon() const
{

    cout << "Enter miles driven or -1 to quit: ";
    int milles = 0;
    cin >> milles;
    cout << "Enter Gallons used: ";
    int gallons = 0;
    cin >> gallons;


    cout << "MPG this trip: ";
    double mpg = static_cast<double>(milles) / gallons;
    cin >> mpg;

    while (milles != -1)
    {
        milles += milles;
        gallons += gallons;
        cout << "Enter grade or -1 to quit: ";
        cin >> milles;
        cout << "Enter Gallons used: ";
        cin >> gallons;
    }
    
    if(milles != 0)
    {
        
        
        cout << "\nTotal MPG: " << milles/gallons << endl;

        cout << setprecision(2) << fixed;
    }
    else
    {
        cout << "No gallons nor milles were entered." << endl;
    }    
}