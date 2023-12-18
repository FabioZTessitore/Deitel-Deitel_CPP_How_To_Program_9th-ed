// ex6_17
// Random Numbers

#include <iostream>
#include <random>
#include <ctime>

using std::cout;
using std::default_random_engine;
using std::endl;
using std::uniform_int_distribution;

int main()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));

    uniform_int_distribution<unsigned int> randomInt(1, 5);

    cout << "Random numbers" << endl;

    cout << "a) 2, 4, 6, 8, 10: " << 2 * randomInt(engine) << endl;
    cout << "b) 3, 5, 7, 9, 11: " << 2 * randomInt(engine) + 1 << endl;
    cout << "c) 6, 10, 14, 18, 22: " << 2 * (2 * randomInt(engine) + 1) << endl;
}