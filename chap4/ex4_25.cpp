// ex4_25
// Square of Asterisks

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int side = -1;
    int r, c;

    while (side < 1 || side > 20)
    {
        cout << "Side of the square (1 - 20): ";
        cin >> side;
    }

    r = 1;
    while (r <= side)
    {
        c = 1;
        while (c <= side)
        {
            cout << '#';
            c++;
        }
        cout << endl;
        r++;
    }
}