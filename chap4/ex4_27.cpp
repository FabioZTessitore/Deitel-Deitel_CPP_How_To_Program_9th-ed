// ex4_27
// Printing the Decimal Equivalent of a Binary Number

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    int w = 1;
    int d = 0;
    int c;

    cout << "Enter a binary number: ";
    cin >> n;

    while (n != 0)
    {
        c = n % 10;
        d += c * w;

        n = n / 10;
        w *= 2;
    }

    cout << "Decimal: " << d << endl;
}