// Fig. 6.14: fig06_14.cpp
// square function used to demonstrate the function
// call stack and activation records

#include <iostream>
using namespace std;

int square(int);

int main()
{
    int a = 10;
    cout << a << " squared: " << square(a) << endl;
}

int square(int x)
{
    return x * x;
}