// ex4_34c
// Factorial

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N = 10;

    double x = 0.;
    double x_to_n = 1.;
    int factorial = 1;
    double e_to_x = 1.;

    int counter;

    cout << "e^x\n"
         << endl;

    cout << "x: ";
    cin >> x;

    x_to_n = x;

    counter = 1;
    while (counter < N)
    {
        factorial *= counter;

        e_to_x += x_to_n / static_cast<double>(factorial);

        x_to_n *= x;
        counter++;
    }

    cout << "e^x (" << N << " terms) = " << e_to_x << endl;
}