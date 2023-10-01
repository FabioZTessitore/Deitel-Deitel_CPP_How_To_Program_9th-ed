// Account.cpp

#include <iostream>
#include "Account.h"
using std::cerr;
using std::endl;

Account::Account(int initialBalance)
{
    if (initialBalance < 0)
    {
        balance = 0;
        cerr << "Initial balance is invalid. Set to 0" << endl;
    }
    else
    {
        balance = initialBalance;
    }
}

void Account::credit(int amount)
{
    balance += amount;
}

void Account::debit(int amount)
{
    if (amount > balance)
    {
        cerr << "Debit amount exceeded account balance" << endl;
    }
    else
    {
        balance -= amount;
    }
}

int Account::getBalance() const
{
    return balance;
}
