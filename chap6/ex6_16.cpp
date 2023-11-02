// ex6_16
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

    uniform_int_distribution<unsigned int> randomA(1, 2);
    uniform_int_distribution<unsigned int> randomB(1, 100);
    uniform_int_distribution<unsigned int> randomC(0, 9);
    uniform_int_distribution<unsigned int> randomD(1000, 1112);
    uniform_int_distribution<int> randomE(-1, 1);
    uniform_int_distribution<int> randomF(-3, 11);

    cout << "Random numbers" << endl;

    cout << "a)    1 <= n <=    2: " << randomA(engine) << endl;
    cout << "b)    1 <= n <=  100: " << randomB(engine) << endl;
    cout << "c)    0 <= n <=    9: " << randomC(engine) << endl;
    cout << "d) 1000 <= n <= 1112: " << randomD(engine) << endl;
    cout << "e)   -1 <= n <=    1: " << randomE(engine) << endl;
    cout << "f)   -3 <= n <=   11: " << randomF(engine) << endl;
}