// ex6_48
// Craps Game Modification

#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

unsigned int rollDice();

int main()
{
    enum Status
    {
        CONTINUE,
        WON,
        LOST
    };

    srand(static_cast<unsigned int>(time(0)));

    unsigned int myPoint = 0;
    Status gameStatus = CONTINUE;
    int bankBalance = 1000;
    int wager;

    do
    {
        cout << "Enter a wager (max " << bankBalance << "): ";
        cin >> wager;
    } while (wager > bankBalance);

    unsigned int sumOfDice = rollDice();

    switch (sumOfDice)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = sumOfDice;
        cout << "Point is " << myPoint << endl;
        break;
    }

    while (CONTINUE == gameStatus)
    {
        sumOfDice = rollDice();
        if (sumOfDice == myPoint)
            gameStatus = WON;
        else if (sumOfDice == 7)
            gameStatus = LOST;
    }

    if (WON == gameStatus)
    {
        cout << "Player wins" << endl;
        bankBalance += wager;
    }
    else
    {
        cout << "Player loses" << endl;
        bankBalance -= wager;
    }
    cout << "Bank Balance is: " << bankBalance << endl;

    if (bankBalance <= 0)
    {
        cout << "Sorry, You busted!" << endl;
    }
}

unsigned int rollDice()
{
    unsigned int die1 = 1 + rand() % 6;
    unsigned int die2 = 1 + rand() % 6;
    unsigned int sum = die1 + die2;

    cout << "Player rolled " << die1 << " + " << die2
         << " = " << sum << endl;
    return sum;
}