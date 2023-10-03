// ex3_13
// Invoice Class

#include <iostream>
#include "Invoice.h"

using std::cout;
using std::endl;

int main()
{
    Invoice invoice("1-s2", "Hammer", 2, 1);
    cout << "Invoice Amount: " << invoice.getInvoiceAmount() << endl;

    return 0;
}