// ex6_31
// Greatest Common Divisor

#include <iostream>
using std::cout;
using std::endl;

int gcd(int n1, int n2);

int main()
{
    int number1 = 10;
    int number2 = 25;

    cout << "GCD(" << number1 << ", " << number2 << "): "
         << gcd(number1, number2) << endl;
}

int gcd(int n1, int n2)
{
    int k = 1;

    for (int i = 2; i <= n1 and i <= n2; ++i)
    {
        if (n1 % i == 0 and n2 % i == 0)
        {
            k = i;
        }
    }

    return k;
}