// ex6_33
// Coin Tossing

#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;

int flip();

int main()
{
    const int N = 100;
    int heads = 0;

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < N; ++i)
    {
        heads += flip();
    }

    cout << "Tails: " << N - heads << endl;
    cout << "Heads: " << heads << endl;
}

int flip()
{
    int result = rand() % 2;

    if (result == 0)
    {
        cout << "Tails" << endl;
    }
    else
    {
        cout << "Heads" << endl;
    }

    return result;
}