// ex6_24
// Separating Digits

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

int quot(int a, int b);
int rem(int a, int b);
void printDigits(int n);

int main()
{
    printDigits(3027);
}

int quot(int a, int b)
{
    return a / b;
}

int rem(int a, int b)
{
    return a % b;
}

void printDigits(int n)
{
    // looks for maximux weight
    int w = 1;
    while (w <= n)
    {
        w *= 10;
    }
    w /= 10;

    while (w > 0)
    {
        int digit = quot(n, w);
        cout << setw(3) << digit;
        n = rem(n, w);
        w = quot(w, 10);
    }
    cout << endl;
}