// ex5_10
// Factorials

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

int main()
{
    unsigned int fact = 1;

    cout << "  N Factorial" << endl;
    for (unsigned int i = 1; i <= 5; i++)
    {
        fact *= i;
        cout << setw(3) << i << setw(10) << fact << endl;
    }
}