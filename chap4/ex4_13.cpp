// ex4_13
// Gas Mileage

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double gallons;
    double total_gallons = 0.;
    int miles;
    int total_miles = 0;
    double milesPerGallons;

    cout << "Enter miles driven (-1 to end): ";
    cin >> miles;

    while (miles != -1)
    {
        cout << "Enter gallons used: ";
        cin >> gallons;

        total_gallons += gallons;
        total_miles += miles;
        milesPerGallons = miles / gallons;

        cout << "MPG this trip: " << milesPerGallons << endl;
        cout << "Total MPG: " << total_miles / total_gallons << endl;

        cout << "\nEnter miles driven (-1 to end): ";
        cin >> miles;
    }
}