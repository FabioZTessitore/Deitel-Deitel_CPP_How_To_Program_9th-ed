// ex5_13
// Bar Chart

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;

int main()
{
    int n1, n2, n3, n4, n5;

    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;
    cout << "Enter n3: ";
    cin >> n3;
    cout << "Enter n4: ";
    cin >> n4;
    cout << "Enter n5: ";
    cin >> n5;

    cout << setw(2) << n1 << ": ";
    for (int i = 0; i < n1; ++i)
    {
        cout << '*';
    }
    cout << endl;

    cout << setw(2) << n2 << ": ";
    for (int i = 0; i < n2; ++i)
    {
        cout << '*';
    }
    cout << endl;

    cout << setw(2) << n3 << ": ";
    for (int i = 0; i < n3; ++i)
    {
        cout << '*';
    }
    cout << endl;

    cout << setw(2) << n4 << ": ";
    for (int i = 0; i < n4; ++i)
    {
        cout << '*';
    }
    cout << endl;

    cout << setw(2) << n5 << ": ";
    for (int i = 0; i < n5; ++i)
    {
        cout << '*';
    }
    cout << endl;
}