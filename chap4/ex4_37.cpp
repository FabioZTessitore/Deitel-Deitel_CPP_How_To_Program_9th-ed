// ex4_37
// World Population Growth

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;

int main()
{
    double population_growth_rate = .009;
    double present_population = 7.888;
    double current_population = present_population;
    bool flag_double = false;
    int year;

    cout << setw(4) << "Y" << setw(8) << "Pop" << setw(8) << "Inc" << endl;
    year = 1;
    while (year <= 75)
    {
        double increment = current_population * population_growth_rate;
        current_population += increment;
        cout << setw(4) << year << setw(8) << setprecision(3) << fixed << current_population << setw(8) << setprecision(5) << fixed << increment;
        if (!flag_double && current_population >= 2. * present_population)
        {
            cout << "\tPopulation double";
            flag_double = true;
        }
        cout << endl;

        year++;
    }

    cout << endl;
}