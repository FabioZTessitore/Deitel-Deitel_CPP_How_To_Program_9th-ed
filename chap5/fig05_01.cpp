// Fig. 5.1: fig05_01.cpp
// Counter-controlled repetition

#include <iostream>
using namespace std;

int main()
{
    unsigned int counter = 1;
    while (counter <= 10)
    {
        cout << counter << " ";
        ++counter;
    }

    cout << endl;
}