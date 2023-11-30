// ex6_36
// Recursive Exponentiation

#include <iostream>
using std::cout;
using std::endl;

int power(int base, int exponent);

int main()
{
    cout << "3^4 = " << power(3, 4) << endl;
}

int power(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    if (exponent == 1)
        return base;

    return base * power(base, exponent - 1);
}