// ex4_19
// Find the Two Largest Numbers

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int counter = 0;
    int number;
    int largest, largest2;

    cout << "Enter first integer: ";
    cin >> number;
    counter++;
    largest = number;

    cout << "Enter second integer: ";
    cin >> number;
    counter++;
    if (number > largest)
    {
        largest2 = largest;
        largest = number;
    }
    else
    {
        largest2 = number;
    }

    while (counter < 10)
    {
        cout << "Enter an integer: ";
        cin >> number;
        counter++;
        if (number > largest)
        {
            largest2 = largest;
            largest = number;
        }
        else if (number > largest2)
        {
            largest2 = number;
        }
    }

    cout << "Largest is: " << largest << endl;
    cout << "The second largest is: " << largest2 << endl;
}