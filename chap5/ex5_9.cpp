// ex5_9
// Calculating the Product of Odd Integers

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned int prod = 1;

    for (unsigned int i = 1; i <= 15; i += 2)
    {
        prod *= i;
    }

    cout << "Product of odd integers from 1 to 15: " << prod << endl;
}