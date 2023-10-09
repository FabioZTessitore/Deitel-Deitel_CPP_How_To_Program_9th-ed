// ex4_17
// Find the Largest

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int counter = 0;
    int number;
    int largest;

    cout << "Enter an integer: ";
    cin >> number;

    counter++;
    largest = number;

    while (counter < 10)
    {
        cout << "Enter an integer: ";
        cin >> number;

        if (number > largest)
        {
            largest = number;
        }

        counter++;
    }

    cout << "Largest is: " << largest << endl;
}