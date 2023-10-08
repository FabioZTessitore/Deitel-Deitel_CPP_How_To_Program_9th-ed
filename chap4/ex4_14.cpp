// ex4_14
// Credit Limits

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int account_number;
    double balance, charges, credits, credit_limit;

    cout << "Enter account number (-1 to quit): ";
    cin >> account_number;

    while (account_number != -1)
    {
        cout << "Enter beginning balance: ";
        cin >> balance;

        cout << "Enter total charges: ";
        cin >> charges;

        cout << "Enter total credits: ";
        cin >> credits;

        cout << "Enter credit limit: ";
        cin >> credit_limit;

        balance = balance + charges - credits;
        cout << "New balance is " << balance << endl;

        if (balance > credit_limit)
        {
            cout << "Account:      " << account_number << endl;
            cout << "Credit limit: " << credit_limit << endl;
            cout << "Balance:      " << balance << endl;
            cout << "Credit Limit Exceeded" << endl;
        }

        cout << "\nEnter account number (-1 to quit): ";
        cin >> account_number;
    }
}