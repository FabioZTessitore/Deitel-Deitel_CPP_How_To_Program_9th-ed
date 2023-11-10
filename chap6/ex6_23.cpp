// ex6_23.cpp
// Square of Any Character

#include <iostream>
using std::cout;
using std::endl;

void drawSquare(int side, int fillCharacter);
void drawLine(int side, int fillCharacter);

int main()
{
    drawSquare(4, '@');
}

void drawSquare(int side, int fillCharacter)
{
    for (int i = 0; i < side; ++i)
    {
        drawLine(side, fillCharacter);
    }
}

void drawLine(int side, int fillCharacter)
{
    for (int i = 0; i < side; ++i)
    {
        cout << static_cast<char>(fillCharacter);
    }
    cout << endl;
}