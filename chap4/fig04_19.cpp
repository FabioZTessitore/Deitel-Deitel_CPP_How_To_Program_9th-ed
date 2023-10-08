// Fig. 4.19: fig04_19.cpp
// Preincrementing and postincrementing

#include <iostream>
using namespace std;

int main()
{
    int c = 5;
    cout << c << endl;
    cout << c++ << endl;
    cout << c << endl;
    cout << endl;

    c = 5;
    cout << c << endl;
    cout << ++c << endl;
    cout << c << endl;
}