// ex6_27
// Find the Minimum

#include <iostream>
using std::cout;
using std::endl;

double minimum3(double n1, double n2, double n3);

int main()
{
    cout << "Find the minimum of three floating point numbers" << endl;

    cout << "n1: 3., n2: 5., n3: -7.2" << endl;
    cout << "The minimum is: " << minimum3(3., 5., -7.2) << endl;
}

double minimum3(double n1, double n2, double n3)
{
    double m = n1;

    if (n2 < m)
        m = n2;

    if (n3 < m)
        m = n3;

    return m;
}