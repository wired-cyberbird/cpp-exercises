#include <iostream>
using namespace std;

int main()
{
    int productNumber = 0;
    int quantitySold = 0;
    double sales1 = 0;
    double sales2 = 0;
    double sales3 = 0;
    double sales4 = 0;
    double sales5 = 0;
    double total1 = 0;
    double total2 = 0;
    double total3 = 0;
    double total4 = 0;
    double total5 = 0;
    double total = 0;

    for(; productNumber != -1;)
    {
        cout << "Insert number of product : ";
        cin >> productNumber;

        if(productNumber == -1)
        {
            break;
        }

        cout << "Insert quantity sold : ";
        cin >> quantitySold;
    
        switch (productNumber)
        {
        case 1:
            sales1 = quantitySold * 2.98; 
            break;
        case 2:
            sales2 = quantitySold * 4.50;
            break;
        case 3:
            sales3 = quantitySold * 9.98;
            break;
        case 4:
            sales4 = quantitySold * 4.49;
            break;
        case 5:
            sales5 = quantitySold * 6.87;
            break;
        default:
            break;
        }

        total1 += sales1;
        total2 += sales2;
        total3 += sales3;
        total4 += sales4;
        total5 += sales5;
    }

     total = total1 + total2 + total3 + total4 + total5;

     cout << "total sales of product 1 : $" << total1 << endl;
     cout << "total sales of product 2 : $" << total2 << endl;
     cout << "total sales of product 3 : $" << total3 << endl;
     cout << "total sales of product 4 : $" << total4 << endl;
     cout << "total sales of product 5 : $" << total5 << endl;
     cout << "total of sales : $" << total << endl;
}