// ex2_20.cpp
// Diameter, Circumference and Area of a Circle

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int radius;

    cout << "Radius: ";
    cin >> radius;

    cout << "Diameter: " << radius * 2 << endl;
    cout << "Circumference: " << 2. * 3.14159 * radius << endl;
    cout << "Area: " << 3.14149 * radius * radius << endl;

    return 0;
}