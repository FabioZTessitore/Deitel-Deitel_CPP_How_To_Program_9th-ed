// ex2_31.cpp
// Car-Pool Savings Calculator

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double miles = 0.;
    double cost_per_gallon = 0.;
    double average_miles_per_gallon = 0.;
    double parking_fees = 0.;
    double tolls = 0.;

    cout << "Total miles driven per day: ";
    cin >> miles;

    cout << "Cost per gallon of gasoline: ";
    cin >> cost_per_gallon;

    cout << "Average miles per gallon: ";
    cin >> average_miles_per_gallon;

    cout << "Parking fees per day: ";
    cin >> parking_fees;

    cout << "Tolls per day: ";
    cin >> tolls;

    double daily_driving_cost = miles * cost_per_gallon / average_miles_per_gallon + parking_fees + tolls;
    cout << "Daily driving cost: " << daily_driving_cost << endl;

    return 0;
}