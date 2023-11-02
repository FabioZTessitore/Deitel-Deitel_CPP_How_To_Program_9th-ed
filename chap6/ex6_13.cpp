// ex6_13
// Rounding Numbers

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Enter five numbers ..." << endl;

    for (int i = 0; i < 5; ++i)
    {
        double x;
        cout << "x: ";
        cin >> x;

        cout << "x: " << x << " y: " << floor(x + .5) << endl;
    }
}