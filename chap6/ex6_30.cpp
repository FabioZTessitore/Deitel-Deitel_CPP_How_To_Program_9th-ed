// ex6_30
// Reverse Digits

#include <iostream>
using std::cout;
using std::endl;

int reverseDigits(int number);

int main()
{
    int number = 7631;
    cout << "A number: " << number << endl;

    number = reverseDigits(number);
    cout << "With digits reversed: " << number << endl;
}

int reverseDigits(int number)
{
    int result = 0;

    while (number)
    {
        int digit = number % 10;
        result = result * 10 + digit;
        number /= 10;
    }

    return result;
}