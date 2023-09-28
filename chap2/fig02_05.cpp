// Fig. 2.5: fig2_05.cpp
// Addition program that displays the sum of two integers

#include <iostream>

int main()
{
    int number1 = 0;
    int number2 = 0;
    int sum = 0;

    std::cout << "Enter first integer: ";
    std::cin >> number1;

    std::cout << "Enter second integer: ";
    std::cin >> number2;

    sum = number1 + number2;

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}