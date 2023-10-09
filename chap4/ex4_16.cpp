// ex4_16
// Salary Calculator

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    int hours;
    double hourly_rate;
    double salary;

    cout << "Enter hours worked (-1 to end): ";
    cin >> hours;

    while (hours != -1)
    {
        cout << "Enter hourly rate of the employee ($00.00): ";
        cin >> hourly_rate;

        if (hours <= 40)
        {
            salary = hours * hourly_rate;
        }
        else
        {
            salary = 40 * hourly_rate + (hours - 40) * hourly_rate * 1.5;
        }
        cout << setprecision(2) << fixed;
        cout << "Salary is " << salary << endl;

        cout << "\nEnter hours worked (-1 to end): ";
        cin >> hours;
    }
}