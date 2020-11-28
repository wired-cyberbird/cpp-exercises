#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int total = 0;

    for (int numbers = 0; numbers != 9999;)
    {
        
        cout << "insert numbers to make average: ";
        cin >> numbers;

        if(numbers != 9999)
        {
            total += numbers;
            count++;
        }
    }

    cout << "the total is : " << total << endl;
    cout << "the summed numbers are : " << count << endl;
    double average = total/count;
    cout << "average is : " << average << endl;
    
}