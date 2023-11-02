// ex6_12
// Parking Charges

#include <iostream>
#include <iomanip>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;

#define MINIMUM_FEE 2.
#define MINIMUM_TIME 3
#define MAXIMUM_TIME 24
#define ADDITIONAL .5
#define MAXIMUM_FEE 10.

double calculateCharge(double hours);

int main(void)
{
    double hours1, hours2, hours3, hoursTot;
    double charge1, charge2, charge3, chargeTot;

    cout << "Hours: ";
    cin >> hours1;
    charge1 = calculateCharge(hours1);

    cout << "Hours: ";
    cin >> hours2;
    charge2 = calculateCharge(hours2);

    cout << "Hours: ";
    cin >> hours3;
    charge3 = calculateCharge(hours3);

    hoursTot = hours1 + hours2 + hours3;
    chargeTot = charge1 + charge2 + charge3;

    cout << "\n\nCar\tHours\tCharge" << endl;
    cout << 1 << "\t" << setw(5) << setprecision(1) << fixed << hours1 << "\t"
         << setw(6) << setprecision(2) << fixed << charge1 << endl;
    cout << 2 << "\t" << setw(5) << setprecision(1) << fixed << hours2 << "\t"
         << setw(6) << setprecision(2) << fixed << charge2 << endl;
    cout << 3 << "\t" << setw(5) << setprecision(1) << fixed << hours3 << "\t"
         << setw(6) << setprecision(2) << fixed << charge3 << endl;
    cout << "TOTAL"
         << "\t" << setw(5) << setprecision(1) << fixed << hoursTot << "\t"
         << setw(6) << setprecision(2) << fixed << chargeTot << endl;
}

double calculateCharge(double hours)
{
    double charge;

    if (hours <= MINIMUM_TIME)
    {
        charge = MINIMUM_FEE;
    }
    else
    {
        charge = MINIMUM_FEE + ADDITIONAL * ceil(hours - MINIMUM_TIME);
    }

    if (charge > MAXIMUM_FEE)
    {
        charge = MAXIMUM_FEE;
    }

    return charge;
}