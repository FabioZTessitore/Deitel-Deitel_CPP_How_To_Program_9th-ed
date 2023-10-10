// ex4_34b
// Factorial

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int N = 10;
    int factorial = 1;
    int counter;
    double e = 1.;

    cout << "Nepero number e\n"
         << endl;

    counter = 1;
    while (counter < N)
    {
        factorial *= counter;
        e += 1. / static_cast<double>(factorial);

        counter++;
    }
    cout << "e (with " << N << " terms) = " << e << endl;
}