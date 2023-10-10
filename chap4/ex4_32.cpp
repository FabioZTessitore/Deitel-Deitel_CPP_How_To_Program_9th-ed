// ex4_32
// Sides of a Triangle

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double side1, side2, side3;

    cout << "Sides of a Triangles\n"
         << endl;

    cout << "Side n.1: ";
    cin >> side1;
    cout << "Side n.2: ";
    cin >> side2;
    cout << "Side n.3: ";
    cin >> side3;

    if (side1 > 0 && side2 > 0 && side3 > 0 &&
        side1 + side2 > side3 && side2 + side3 > side1 &&
        side1 + side3 > side2 && abs(side1 - side2) < side3 &&
        abs(side1 - side3) < side2 && abs(side2 - side3) < side1)
    {
        cout << "Yes, it is a triangle" << endl;
    }
    else
    {
        cout << "No, it is not a triangle" << endl;
    }
}