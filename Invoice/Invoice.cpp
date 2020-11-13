#include <iostream>
#include "Invoice.h"
using namespace std;

Invoice::Invoice(string item_number, string item_description, int item_quantity, int item_price)
{
    setPartNumber(item_number);
    setPartDescription(item_description);
    setQuantity(item_quantity);
    setPricePerItem(item_price);
}

void Invoice::setPartNumber(string item_number)
{
    partNumber = item_number;
}

void Invoice::setPartDescription(string item_description)
{
    partDescription = item_description;
}

void Invoice::setQuantity(int item_quantity)
{
    quantityOfItem = item_quantity;
}

void Invoice::setPricePerItem(int item_price)
{
    pricePerItem = item_price;
}

string Invoice::getPartNumber() const
{
    return partNumber;
}

string Invoice::getPartDescription() const
{
    return partDescription;
}

int Invoice::getQuantity() const
{
    return quantityOfItem;
}

int Invoice::getPricePerItem() const
{
    return pricePerItem;
}

int Invoice::getInvoiceAmount() const
{
    if(quantityOfItem * pricePerItem > 0)
    {
        return quantityOfItem * pricePerItem;
    }
    if(quantityOfItem * pricePerItem <= 0)
    {
        return 0;
    }
}