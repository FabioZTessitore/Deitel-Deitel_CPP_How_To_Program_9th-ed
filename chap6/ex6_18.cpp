// ex6_18
// Exponentiation

#include <iostream>

using std::cout;
using std::endl;

int integerPower(int base, int exponent);

int main()
{
    cout << "integerPower(3, 4) = " << integerPower(3, 4) << endl;
}

int integerPower(int base, int exponent)
{
    int result = 1;
    while (exponent > 0)
    {
        result *= base;
        exponent--;
    }

    return result;
}