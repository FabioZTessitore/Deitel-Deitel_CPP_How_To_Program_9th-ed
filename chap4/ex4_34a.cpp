// ex4_34a
// Factorial

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n = 0;
    int factorial = 1;
    int counter = 1;

    n = -1;
    while (n < 0 || n > 15)
    {
        cout << "Enter a non negative integer (0-15): ";
        cin >> n;
    }

    counter = 2;
    while (counter <= n)
    {
        factorial *= counter;
        counter++;
    }

    cout << n << "! = " << factorial << endl;
}