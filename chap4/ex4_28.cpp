// ex4_28
// Checkerboard Pattern of Asterisks

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int r, c;

    r = 1;
    while (r <= 8)
    {
        if (r % 2 == 0)
        {
            cout << ' ';
        }

        c = 1;
        while (c <= 8)
        {
            cout << "* ";
            c++;
        }

        cout << endl;
        r++;
    }
}