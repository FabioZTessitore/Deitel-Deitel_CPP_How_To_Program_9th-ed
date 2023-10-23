// ex5_24.cpp
// Diamond of Asterisks Modification

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // number of rows
    int N = 0;

    do
    {
        cout << "Diamind size (odd number in the range 1-19): ";
        cin >> N;
    } while (N < 1 || N % 2 != 1 || N > 20);

    /* upper part */
    for (unsigned int row_counter = 0; row_counter < N / 2; ++row_counter)
    {
        for (unsigned int blank_counter = 1; blank_counter < N / 2 - row_counter + 1; ++blank_counter)
        {
            cout << ' ';
        }
        for (unsigned int star_counter = 1; star_counter <= 2 * row_counter + 1; ++star_counter)
        {

            cout << '*';
        }
        cout << endl;
    }
    /* middle row */
    for (unsigned int star_counter = 1; star_counter <= N; ++star_counter)
    {
        cout << '*';
    }
    cout << endl;
    /* lower part */
    for (unsigned int row_counter = 0; row_counter < N / 2; ++row_counter)
    {
        for (unsigned int blank_counter = 1; blank_counter <= row_counter + 1; ++blank_counter)
        {
            cout << ' ';
        }
        for (unsigned int star_counter = 1; star_counter < N - (2 * row_counter + 1); ++star_counter)
        {
            cout << '*';
        }
        cout << endl;
    }
}