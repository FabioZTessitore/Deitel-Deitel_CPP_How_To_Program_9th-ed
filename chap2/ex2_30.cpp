// ex2_30.cpp
// Body Mass Index Calculator

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "BMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 and 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obese: 30 or greater\n"
         << endl;

    double weightKg, heightMt;

    cout << "Weight in Kg: ";
    cin >> weightKg;

    cout << "Height in meters: ";
    cin >> heightMt;

    double bmi = weightKg / (heightMt * heightMt);
    cout << "BMI: " << bmi << endl;

    return 0;
}