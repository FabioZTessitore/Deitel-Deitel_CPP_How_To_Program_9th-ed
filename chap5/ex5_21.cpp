// ex5_21
// Calculating Salaries

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    cout << "Weekly Pay" << endl
         << endl;

    int choice;
    cout << "0 - Exit" << endl;
    cout << "1 - Manager" << endl;
    cout << "2 - Hourly worker" << endl;
    cout << "3 - Commission worker" << endl;
    cout << "4 - Pieceworker" << endl;
    cin >> choice;

    while (choice != 0)
    {
        double wage;
        int n;
        double pay;

        switch (choice)
        {
        case 1:
            cout << "Weekly salary: ";
            cin >> wage;
            pay = wage;
            break;
        case 2:
            cout << "Hourly wage: ";
            cin >> wage;
            cout << "Number of hours: ";
            cin >> n;
            if (n > 40)
            {
                pay = 40 * wage + (n - 40) * wage * 1.5;
            }
            else
            {
                pay = n * wage;
            }
            break;
        case 3:
            cout << "Gross weekly sales: ";
            cin >> wage;
            pay = 250. + .057 * wage;
            break;
        case 4:
            cout << "Money for each of the item: ";
            cin >> wage;
            cout << "Number of items: ";
            cin >> n;
            pay = wage * n;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

        cout << setprecision(2) << fixed;
        cout << "Pay: " << pay << endl
             << endl;

        cout << "0 - Exit" << endl;
        cout << "1 - Manager" << endl;
        cout << "2 - Hourly worker" << endl;
        cout << "3 - Commission worker" << endl;
        cout << "4 - Pieceworker" << endl;
        cin >> choice;
    }
}