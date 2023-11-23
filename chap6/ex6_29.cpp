// ex6_29
// Prime Numbers

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

bool isPrime(int number);

int main()
{
    for (unsigned int i = 2; i <= 10000; ++i)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

bool isPrime(int number)
{
    if (number == 2)
        return true;

    if (number % 2 == 0)
        return false;

    for (unsigned int i = 3; i <= sqrt(number / 2); i += 2)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}