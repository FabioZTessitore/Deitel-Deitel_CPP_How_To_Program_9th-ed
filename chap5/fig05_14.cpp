// Fig. 5.14: fig05_14.cpp
// continue statement terminating an iteration of a for statement

#include <iostream>
using namespace std;
int main()
{
    for (unsigned int count = 1; count <= 10; ++count)
    {
        if (count == 5)
            continue;

        cout << count << " ";
    }
    cout << "\nUsed continue to skip printing 5" << endl;
}