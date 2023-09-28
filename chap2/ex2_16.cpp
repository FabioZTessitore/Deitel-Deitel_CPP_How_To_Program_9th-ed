// ex2_16.cpp
// Arithmetic

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Calculate sum, product, difference, quotient and remainder" << endl;

    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int sum, product, difference, quotient, remainder;

    sum = a + b;
    product = a * b;
    difference = a - b;
    quotient = a / b;
    remainder = a % b;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Difference: " << difference << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}