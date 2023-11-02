// ex6_10
// inline function

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

inline double sphereVolume(double radius)
{
    return 4. / 3. * 3.14159 * pow(radius, 3);
}

int main()
{
    double sphereRadius = 0.;
    cout << "Enter the radius of a sphere: ";
    cin >> sphereRadius;

    double volume = sphereVolume(sphereRadius);

    cout << "The volume of the sphere is " << volume << endl;
}