// ex6_19
// Hypotenuse Calculations

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

double hypotenuse(double l1, double l2);

int main()
{
    cout << "Triangle\tSide 1\tSide 2\tHypotenuse" << endl;
    cout << "1\t\t3.0\t4.0\t" << hypotenuse(3., 4.) << endl;
    cout << "2\t\t5.0\t12.0\t" << hypotenuse(5., 12.) << endl;
    cout << "3\t\t8.0\t15.0\t" << hypotenuse(8., 15.) << endl;
}

double hypotenuse(double l1, double l2)
{
    return sqrt(l1 * l1 + l2 * l2);
}