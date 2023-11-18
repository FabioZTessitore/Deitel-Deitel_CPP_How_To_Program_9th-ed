// ex6_26
// Celsius and Fahrenheit Temperatures

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

int celsius(int fahrenheit);
int fahrenheit(int celsius);

int main()
{
    cout << setw(8) << "Celsius" << setw(12) << "Fahrenheit"
         << setw(15) << "Fahrenheit" << setw(8) << "Celsius" << endl;
    for (int c = 0, f = 32; c <= 100; c += 10, f += 18)
    {
        cout << setw(8) << c << setw(12) << fahrenheit(c)
             << setw(15) << f << setw(8) << celsius(f) << endl;
    }
}

int celsius(int fahrenheit)
{
    return (fahrenheit - 32) / 1.8;
}

int fahrenheit(int celsius)
{
    return celsius * 1.8 + 32;
}