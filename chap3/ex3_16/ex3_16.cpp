// ex3_16
// Target-Heart-Rate Calculator

#include <iostream>
#include <string>
#include "HeartRates.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string firstname, lastname;
    int month, day, year;

    cout << "Firstname: ";
    cin >> firstname;
    cout << "Lastname: ";
    cin >> lastname;
    cout << "Month of birth: ";
    cin >> month;
    cout << "Day of birth: ";
    cin >> day;
    cout << "Year of birth: ";
    cin >> year;

    HeartRates heartRates(firstname, lastname, month, day, year);

    int actualYear;
    cout << "Actual Year: ";
    cin >> actualYear;

    cout << endl
         << heartRates.getFirstname()
         << " " << heartRates.getLastname()
         << ", " << heartRates.getMonth()
         << "/" << heartRates.getDay()
         << "/" << heartRates.getYear() << endl;
    cout << "Age: " << heartRates.getAge(actualYear) << endl;
    cout << "Maximum Heart Rate: " << heartRates.getMaxHeartRate(actualYear) << endl;
    heartRates.displayTargetHeartRate(actualYear);
}
