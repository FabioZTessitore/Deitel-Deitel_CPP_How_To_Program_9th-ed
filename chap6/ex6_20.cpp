// ex6_20
// Multiples

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool multiple(int m, int n);

int main()
{
    int m, n;

    cout << "Enter first integer: ";
    cin >> m;

    cout << "Enter second integer: ";
    cin >> n;

    cout << "First integer is multiple of second integer: "
         << (multiple(m, n)
                 ? "true"
                 : "false")
         << endl;
}

bool multiple(int m, int n)
{
    return m % n == 0;
}