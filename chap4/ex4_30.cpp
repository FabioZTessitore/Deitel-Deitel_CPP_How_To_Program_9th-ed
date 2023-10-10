// ex4_30
// Calculating a Circle's Diameter, Circumference and Area

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double radius;

    cout << "Diameter, Circumference and Area of a Circle\n"
         << endl;

    cout << "Enter the radius: ";
    cin >> radius;

    cout << "Diameter: " << 2. * radius << endl;
    cout << "Circumference: " << 2. * 3.14159 * radius << endl;
    cout << "Area: " << 3.14159 * radius * radius << endl;
}