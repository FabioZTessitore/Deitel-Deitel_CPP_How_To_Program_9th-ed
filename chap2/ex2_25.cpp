// ex2_25.cpp
// Multiples

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    if (a % b == 0)
    {
        cout << a << " is a multiple of " << b << endl;
    }

    return 0;
}