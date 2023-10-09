// ex4_15
// Sales Commission Calculator

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    double sales;
    double base = 200.;
    double perc_sales = .09;

    cout << "Enter sales in dollars (-1 to end): ";
    cin >> sales;

    while (sales != -1)
    {
        cout << setprecision(2) << fixed;
        cout << "Salary is " << base + perc_sales * sales << endl;

        cout << "\nEnter sales in dollars (-1 to end): ";
        cin >> sales;
    }
}