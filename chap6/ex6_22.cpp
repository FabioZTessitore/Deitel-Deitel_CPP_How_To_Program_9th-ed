// ex6_22.cpp
// Square of Asterisks

#include <iostream>
using std::cout;
using std::endl;

void drawSquare(int side);
void drawLine(int side);

int main()
{
    drawSquare(4);
}

void drawSquare(int side)
{
    for (int i = 0; i < side; ++i)
    {
        drawLine(side);
    }
}

void drawLine(int side)
{
    for (int i = 0; i < side; ++i)
    {
        cout << '*';
    }
    cout << endl;
}