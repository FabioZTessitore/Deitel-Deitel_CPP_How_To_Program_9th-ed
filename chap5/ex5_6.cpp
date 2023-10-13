// ex5_6
// Averaging Integers

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    cout << "Average of integers" << endl
         << endl;

    int number;
    int sum = 0;
    int counter;
    double average = 0.;
    cout << "Enter a number: ";
    cin >> number;

    for (counter = 0; number != 9999; ++counter)
    {
        sum += number;

        cout << "Enter a number: ";
        cin >> number;
    }

    if (counter > 0)
    {
        average = static_cast<double>(sum) / counter;

        cout << "Entered " << counter << " values" << endl;
        cout << "Sum is " << sum << endl;
        cout << setprecision(2) << fixed;
        cout << "Average is " << average << endl;
    }
    else
    {
        cout << "No values entered" << endl;
    }
}