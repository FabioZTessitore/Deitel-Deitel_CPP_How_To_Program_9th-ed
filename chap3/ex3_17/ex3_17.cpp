// ex3_17
// Computerization of Health Records

#include <iostream>
#include <string>
#include "HealthProfile.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string firstname, lastname, gender;
    int month, day, year;
    int height, weight;

    cout << "Firstname: ";
    cin >> firstname;
    cout << "Lastname: ";
    cin >> lastname;
    cout << "Gender: ";
    cin >> gender;
    cout << "Month of birth: ";
    cin >> month;
    cout << "Day of birth: ";
    cin >> day;
    cout << "Year of birth: ";
    cin >> year;
    cout << "Height (inches): ";
    cin >> height;
    cout << "Weight (pounds): ";
    cin >> weight;

    HealthProfile healthProfile(firstname, lastname, gender, day, month, year, height, weight);

    cout << endl
         << healthProfile.getFirstname()
         << " "
         << healthProfile.getLastname()
         << endl
         << "Gender: " << healthProfile.getGender()
         << endl
         << "Date of birth: " << healthProfile.getMonthOfBirth() << "/" << healthProfile.getDayOfBirth() << "/" << healthProfile.getYearOfBirth()
         << endl
         << "Height: " << healthProfile.getHeight()
         << " Weight: " << healthProfile.getWeight() << endl;

    cout << "\nBMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 and 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obese: 30 or greater" << endl;
    cout << "BMI: " << healthProfile.getBMI() << endl;

    int actualYear;
    cout << "Actual Year: ";
    cin >> actualYear;

    cout << endl
         << "Age: " << healthProfile.getAge(actualYear) << endl;
    cout << "Maximum Heart Rate: " << healthProfile.getMaxHeartRate(actualYear) << endl;
    cout << "Target Heart Rate " << healthProfile.getTargetMinHeartRate(actualYear) << " - " << healthProfile.getTargetMaxHeartRate(actualYear) << endl;
}