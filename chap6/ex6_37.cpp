// ex6_37
// Fibonacci Series: Iterative Solution

#include <iostream>
using std::cout;
using std::endl;

unsigned long fibonacci(unsigned long);

int main()
{
    for (unsigned int counter = 0; counter <= 10; ++counter)
        cout << "fibonacci( " << counter << " ) = "
             << fibonacci(counter) << endl;

    cout << "\nfibonacci( 20 ) = " << fibonacci(20) << endl;
    cout << "fibonacci( 30 ) = " << fibonacci(30) << endl;
    cout << "fibonacci( 35 ) = " << fibonacci(35) << endl;
}

unsigned long fibonacci(unsigned long number)
{
    if ((0 == number) || (1 == number))
        return number;

    unsigned long prevprev = 0;
    unsigned long prev = 1;
    unsigned long result = 1;

    for (unsigned int counter = 2; counter <= number; ++counter)
    {
        result = prev + prevprev;
        prevprev = prev;
        prev = result;
    }

    return result;
}