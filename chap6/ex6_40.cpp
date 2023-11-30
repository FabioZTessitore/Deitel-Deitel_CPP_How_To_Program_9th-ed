// ex6_40
// Visualizing Recursion

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

unsigned long factorial(unsigned long, int level);

int main()
{
    cout << setw(2) << 5 << "! = " << factorial(5, 0) << endl;
}

unsigned long factorial(unsigned long number, int level)
{
    for (int i = 0; i < level; ++i)
        cout << '\t';
    cout << "factorial(" << number << ")" << endl;

    if (number <= 1)
        return 1;
    else
        return number * factorial(number - 1, level + 1);
}