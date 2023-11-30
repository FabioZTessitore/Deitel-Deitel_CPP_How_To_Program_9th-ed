// ex6_41
// Recursive Greatest Common Divisor

#include <iostream>
using std::cout;
using std::endl;

int gcd(int m, int n);

int main()
{
    int x = 246;
    int y = 36;
    cout << "gcd(" << x << ", " << y << ") = " << gcd(x, y) << endl;
}

int gcd(int x, int y)
{
    if (y == 0)
        return x;

    return gcd(y, x % y);
}