// ex2_28.cpp
// Digits of an Integer

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;

    cout << "Enter a five digits integer: ";
    cin >> n;

    int c1, c2, c3, c4, c5;

    c1 = n % 10;
    n = n / 10;

    c2 = n % 10;
    n = n / 10;

    c3 = n % 10;
    n = n / 10;

    c4 = n % 10;
    n = n / 10;

    c5 = n % 10;

    cout << c5 << " " << c4 << " " << c3 << " " << c2 << " " << c1 << endl;

    return 0;
}