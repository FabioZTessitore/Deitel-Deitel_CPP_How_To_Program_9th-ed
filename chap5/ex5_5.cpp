// ex5_5
// Summing Integers

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number_of_values = 0;
    cout << "Enter the number of values: ";
    cin >> number_of_values;

    int number;
    int sum = 0;
    for (unsigned int counter = 1; counter <= number_of_values; ++counter)
    {
        cout << "Enter a number: ";
        cin >> number;

        sum += number;
    }
    cout << "Sum is " << sum << endl;
}