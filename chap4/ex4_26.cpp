// ex4_26
// Palindromes

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n = 0;
    int c1, c2, c4, c5;

    while (n < 10000 || n > 99999)
    {
        cout << "Enter a five-digit integer: ";
        cin >> n;
    }

    c1 = n % 10;
    n = n / 10;

    c2 = n % 10;
    n = n / 10;

    // c3 unused
    // c3 = n % 10
    n = n / 10;

    c4 = n % 10;
    c5 = n / 10;

    if (c1 == c5 && c2 == c4)
    {
        cout << "It's a palindrome!" << endl;
    }
}