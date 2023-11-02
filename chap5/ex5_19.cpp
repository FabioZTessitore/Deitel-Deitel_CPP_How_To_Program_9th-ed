// ex5_19
// Calculating PI

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;

int main()
{
    double num = 4.;
    double den = 1.;
    double sign = 1.;
    double pi = 0.;

    cout << "   N       PI" << endl;
    for (unsigned int i = 0; i < 1000; ++i)
    {
        pi += sign * num / den;

        cout << setw(4) << i << " ";
        cout << setw(6) << fixed << setprecision(6) << pi << endl;

        sign = -sign;
        den += 2.;
    }
}