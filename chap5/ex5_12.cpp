// ex5_12
// Drawing Patterns with Nested for Loops

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "(A)" << endl;
    for (int r = 1; r <= 10; ++r)
    {
        for (int c = 1; c <= r; ++c)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    cout << "(B)" << endl;
    for (int r = 1; r <= 10; ++r)
    {
        for (int c = 11 - r; c > 0; --c)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    cout << "(C)" << endl;
    for (int r = 1; r <= 10; ++r)
    {
        for (int c = 1; c < r; ++c)
        {
            cout << ' ';
        }
        for (int c = 11 - r; c > 0; --c)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    cout << "(D)" << endl;
    for (int r = 1; r <= 10; ++r)
    {
        for (int c = 11 - r - 1; c > 0; --c)
        {
            cout << ' ';
        }
        for (int c = 1; c <= r; ++c)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    cout << "(A)          "
         << "(B)          "
         << "(C)          "
         << "(D)" << endl;
    for (int r = 1; r <= 10; r++)
    {
        for (int c = 1; c <= r; ++c)
        {
            cout << '*';
        }
        for (int c = r; c <= 10; ++c)
        {
            cout << ' ';
        }

        cout << "  ";

        for (int c = 11 - r; c > 0; --c)
        {
            cout << '*';
        }
        for (int c = r; c > 0; --c)
        {
            cout << ' ';
        }

        cout << "  ";

        for (int c = 1; c < r; ++c)
        {
            cout << ' ';
        }
        for (int c = 11 - r; c > 0; --c)
        {
            cout << '*';
        }

        cout << "   ";

        for (int c = 11 - r - 1; c > 0; --c)
        {
            cout << ' ';
        }
        for (int c = 1; c <= r; ++c)
        {
            cout << '*';
        }

        cout << endl;
    }
    cout << endl;
}