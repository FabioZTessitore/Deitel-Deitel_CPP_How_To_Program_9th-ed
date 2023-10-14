// ex5.11
// Compound Interest

#include <iostream>
#include <iomanip>
#include <cmath>
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;

int main()
{
    double amount;
    double principal = 1000.0;

    for (double rate = 0.05; rate <= 0.10; rate += 0.01)
    {
        cout << "Rate: " << setprecision(2) << fixed << rate << endl;
        cout << "Year" << setw(21) << "Amount on deposit" << endl;
        cout << fixed << setprecision(2);
        for (unsigned int year = 1; year <= 10; ++year)
        {
            amount = principal * pow(1.0 + rate, year);
            cout << setw(4) << year << setw(21) << amount << endl;
        }
    }
}