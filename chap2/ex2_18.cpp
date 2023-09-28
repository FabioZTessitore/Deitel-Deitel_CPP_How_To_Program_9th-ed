// ex2_18.cpp
// Comparing Integers

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Comparing Integers" << endl;

    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a > b)
        cout << a << " is larger" << endl;

    if (b > a)
        cout << b << " is larger" << endl;

    if (a == b)
        cout << "These numbers are equal" << endl;

    return 0;
}