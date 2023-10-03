// Invoice.cpp

#include <string>
#include "Invoice.h"
using std::string;

Invoice::Invoice(string thePartNumber,
                 string thePartDescription,
                 int theQtyPurchased,
                 int thePricePerItem)
{
    partNumber = thePartNumber;
    partDescription = thePartDescription;
    qtyPurchased = theQtyPurchased;
    pricePerItem = thePricePerItem;
}

string Invoice::getPartNumber() const
{
    return partNumber;
}

void Invoice::setPartNumber(string number)
{
    partNumber = number;
}

string Invoice::getPartDescription() const
{
    return partDescription;
}

void Invoice::setPartDescription(string description)
{
    partDescription = description;
}

int Invoice::getQtyPurchased() const
{
    return qtyPurchased;
}

void Invoice::setQtyPurchased(int qty)
{
    qtyPurchased = 0;

    if (qty > 0)
    {
        qtyPurchased = qty;
    }
}

int Invoice::getPricePerItem() const
{
    return pricePerItem;
}

void Invoice::setPricePerItem(int price)
{
    pricePerItem = 0;

    if (price > 0)
    {
        pricePerItem = price;
    }
}

int Invoice::getInvoiceAmount() const
{
    return qtyPurchased * pricePerItem;
}
