// ex5_8
// Find the Smallest Integer

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Find the Smallest Integer" << endl
         << endl;

    int number_of_values = 0;
    cout << "Enter the number of values: ";
    cin >> number_of_values;

    if (number_of_values <= 0)
    {
        cout << "No values entered" << endl;
    }
    else
    {
        int number;
        int smallest;
        cout << "Enter a number: ";
        cin >> number;
        smallest = number;

        for (unsigned int counter = 2; counter <= number_of_values; ++counter)
        {
            cout << "Enter a number: ";
            cin >> number;

            if (number < smallest)
            {
                smallest = number;
            }
        }
        cout << "Smallest is " << smallest << endl;
    }
}