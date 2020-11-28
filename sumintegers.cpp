#include <iostream>
using namespace std;

int main()
{
    int numbers = 0;
    int sum = 0;
    int total = 0;

    cout << "Insert how many numbers to sum: ";
    cin >> numbers;

    for (int i = 0; i < numbers; i++)
    {
        cout << "Insert integers to sum: ";
        cin >> sum;
        total += sum;

    }

    cout << "total of sum is: " << total << endl;
    

}