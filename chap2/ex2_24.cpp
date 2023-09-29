// ex2_24.cpp
// Odd or Even

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Odd or Even" << endl;

    int n;
    cout << "n: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    if (n % 2 == 1)
    {
        cout << "Odd" << endl;
    }

    return 0;
}