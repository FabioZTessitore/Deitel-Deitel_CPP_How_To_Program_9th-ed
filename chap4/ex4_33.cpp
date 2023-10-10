// ex4_33
// Sides of a Right Triangle

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int side1, side2, side3;

    cout << "Sides of a Right Triangles\n"
         << endl;

    cout << "Side n.1: ";
    cin >> side1;
    cout << "Side n.2: ";
    cin >> side2;
    cout << "Side n.3: ";
    cin >> side3;

    if ((side1 > 0 && side2 > 0 && side3 > 0) &&
        (side1 * side1 + side2 * side2 == side3 * side3 ||
         side2 * side2 + side3 * side3 == side1 * side1 ||
         side1 * side1 + side3 * side3 == side2 * side2))
    {
        cout << "Yes, it is a right triangle" << endl;
    }
    else
    {
        cout << "No, it is not a right triangle" << endl;
    }
}