// ex3_12.cpp
// Account Class

#include <iostream>
#include "Account.h"
using std::cout;
using std::endl;

int main()
{
    Account a1(1000);
    cout << "a1 initial balance: " << a1.getBalance() << endl;

    a1.credit(500);
    cout << "a1 after credit 500: " << a1.getBalance() << endl;

    a1.debit(200);
    cout << "a1 after debit 200: " << a1.getBalance() << endl
         << endl;

    Account a2(-300);
    cout << "a2 initial balance: " << a2.getBalance() << endl;

    a2.credit(500);
    cout << "a2 after credit 500: " << a2.getBalance() << endl;

    a2.debit(200);
    cout << "a2 after debit 200: " << a2.getBalance() << endl;

    return 0;
}