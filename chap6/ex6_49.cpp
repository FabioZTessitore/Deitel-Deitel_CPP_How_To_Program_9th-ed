// ex6_49
// Circle Area

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

inline double circleArea(double radius);

int main()
{
    double radius;
    cout << "Radius of a circle: ";
    cin >> radius;

    cout << "Area: " << circleArea(radius) << endl;
}

double circleArea(double radius)
{
    return 3.14 * radius * radius;
}