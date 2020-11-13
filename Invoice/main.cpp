#include <iostream>
#include "Invoice.h"
using namespace std;

int main()
{
    Invoice Hard_drive("001", "1TB and 12300rpm", 42, 67);
    Invoice Ram("002", "8GB DDR4 1200MGhz", 59, 35);

    cout << "Invoice of the order is : "
        << "\nHard Drive : " << Hard_drive.getInvoiceAmount()
        << "\nRam : " << Ram.getInvoiceAmount()
        << "\nTotal : " << Hard_drive.getInvoiceAmount() + Ram.getInvoiceAmount() << endl;
}