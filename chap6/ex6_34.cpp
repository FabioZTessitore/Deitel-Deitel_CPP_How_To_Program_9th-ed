// ex6_34
// Guess-the-Number Game

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void random_init();
int random_between(int min, int max);
void guess_init();
void guess_header(int min, int max);
int guess_number(int min, int max);
int guess_check(int number, int guess);

int main()
{
    const int min = 1;
    const int max = 1000;
    string answer;

    guess_init();

    do
    {
        guess_header(min, max);

        int guess = 0;
        int number = guess_number(min, max);

        do
        {
            cout << "? ";
            cin >> guess;
        } while (guess_check(number, guess) != 0);

        do
        {
            cout << "Would you like to play again (y or n)? " << endl;
            cout << "? ";
            cin >> answer;
        } while (answer != "y" and answer != "n");

    } while (answer == "y");
}

void random_init()
{
    srand(static_cast<unsigned int>(time(0)));
}

int random_between(int min, int max)
{
    return min + rand() % (max - min);
}

void guess_init()
{
    random_init();
}

void guess_header(int min, int max)
{
    cout << "\n\nI have a number between "
         << min << " and " << max << ".\nCan you guess my number?\n"
         << "Please type the first guess." << endl;
}

int guess_number(int min, int max)
{
    return random_between(min, max + 1);
}

int guess_check(int number, int guess)
{
    if (number == guess)
    {
        cout << "Excellent! You guess the number!" << endl;
    }
    else if (number < guess)
    {
        cout << "Too high. Try again." << endl;
    }
    else
    {
        cout << "Too low. Try again." << endl;
    }

    return guess - number;
}