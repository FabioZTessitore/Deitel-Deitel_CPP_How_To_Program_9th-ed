// Fig. 7.8: fig07_08.cpp
// Compute the sum of the elements of an array

#include <iostream>
#include <array>
using namespace std;

int main()
{
    const size_t arraySize = 4;
    array<int, arraySize> a = {10, 20, 30, 40};

    int total = 0;

    for (size_t i = 0; i < a.size(); ++i)
        total += a[i];

    cout << "Total of array elements: " << total << endl;
}