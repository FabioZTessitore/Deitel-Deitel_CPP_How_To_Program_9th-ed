// ex4_36b
// Enforcing Privacy with Cryptography

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

int main()
{
    int num;
    int temp;
    int c1, c2, c3, c4;

    num = -1;
    while (num < 0 || num > 9999)
    {
        cout << "Enter a four digits number: ";
        cin >> num;
    }

    cout << "\nInitial data: " << setw(4) << setfill('0') << num << endl;

    c1 = num % 10;
    num /= 10;
    c2 = num % 10;
    num /= 10;
    c3 = num % 10;
    num /= 10;
    c4 = num % 10;

    temp = c1;
    c1 = c3;
    c3 = temp;

    temp = c2;
    c2 = c4;
    c4 = temp;

    c1 = (c1 + 3) % 10;
    c2 = (c2 + 3) % 10;
    c3 = (c3 + 3) % 10;
    c4 = (c4 + 3) % 10;

    num = c4 * 1000 + c3 * 100 + c2 * 10 + c1;

    cout << "Final data: " << setw(4) << setfill('0') << num << endl;
}