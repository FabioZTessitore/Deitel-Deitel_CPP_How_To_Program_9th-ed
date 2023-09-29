// ex2_23.cpp
// Largest and Smallest Integers

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c, d, e;

    cout << "Enter three different integers: ";
    cin >> a >> b >> c >> d >> e;

    int smallest = a;
    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;
    if (d < smallest)
        smallest = d;
    if (e < smallest)
        smallest = e;

    int largest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;
    if (d > largest)
        largest = d;
    if (e > largest)
        largest = e;

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    return 0;
}