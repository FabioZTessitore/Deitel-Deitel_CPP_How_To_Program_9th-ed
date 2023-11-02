// ex5_23
// Diamond of Asterisks

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    // number of rows
    const int N = 9;

    cout << "Diamond" << endl;

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