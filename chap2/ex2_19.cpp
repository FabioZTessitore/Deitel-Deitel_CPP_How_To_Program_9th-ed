// ex2_19.cpp
// Arithmetic, Smallest and Largest

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c;

    cout << "Enter three different integers: ";
    cin >> a >> b >> c;

    int sum, average, product, smallest, largest;

    sum = a + b + c;
    average = sum / 3;
    product = a * b * c;

    smallest = a;
    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    largest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Product: " << product << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    return 0;
}