// ex5.16
// Compound Interest Calculations

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int amount;
    int principal = 100000;
    double rate = .05;

    cout << "Year" << setw(21) << "Amount on deposit" << endl;

    cout << fixed << setprecision(2);
    for (unsigned int year = 1; year <= 10; ++year)
    {
        amount = principal * pow(1.0 + rate, year);

        cout << setw(4) << setfill(' ') << year << setw(18) << amount / 100 << ".";
        cout << setw(2) << setfill('0') << amount % 100 << endl;
    }
}