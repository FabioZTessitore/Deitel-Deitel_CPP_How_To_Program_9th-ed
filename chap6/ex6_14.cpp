// ex6_14
// Rounding Numbers

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int roundToInteger(float number);
float roundToTenths(float number);
float roundToHundreths(float number);
float roundToThousandths(float number);

float roundTo(float number, float unit);

int main()
{
    float number;

    cout << "Rounding Numbers" << endl
         << endl;

    cout << "Enter a floating point number: ";
    cin >> number;

    cout << "Round to integer:     " << roundToInteger(number) << endl;
    cout << "Round to tenths:      " << roundToTenths(number) << endl;
    cout << "Round to hundreths:   " << roundToHundreths(number) << endl;
    cout << "Round to thousandths: " << roundToThousandths(number) << endl;
}

int roundToInteger(float number)
{
    return (int)roundTo(number, 1);
}

float roundToTenths(float number)
{
    return roundTo(number, 10);
}

float roundToHundreths(float number)
{
    return roundTo(number, 100);
}

float roundToThousandths(float number)
{
    return roundTo(number, 1000);
}

float roundTo(float number, float unit)
{
    return floor(number * unit + .5) / unit;
}
