// ex6_21.cpp
// Even Numbers

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool isEven(int n);

int main()
{
    int n;

    cout << "Even or odd?\n"
         << endl;

    cout << "Enter a number: ";
    cin >> n;

    if (isEven(n))
    {
        cout << n << " is even" << endl;
    }
    else
    {
        cout << n << " is odd" << endl;
    }
}

bool isEven(int n)
{
    return n % 2 == 0;
}