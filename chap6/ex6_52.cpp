// ex6_52
// Function Template minimum

#include <iostream>
using std::cout;
using std::endl;

template <typename T>
T minimum(T a, T b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Minimum(3, 4): " << minimum(3, 4) << endl;
    cout << "Minimum(3.3, 1.4): " << minimum(3.3, 1.4) << endl;
    cout << "Minimum('a', 'g'): " << minimum('a', 'g') << endl;
}