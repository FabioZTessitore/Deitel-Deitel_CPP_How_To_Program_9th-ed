// ex6_53
// Function Template maximum

#include <iostream>
using std::cout;
using std::endl;

template <typename T>
T maximum(T a, T b)
{
    if (a < b)
        return b;
    else
        return a;
}

int main()
{
    cout << "Maximum(3, 4): " << maximum(3, 4) << endl;
    cout << "Maximum(3.3, 1.4): " << maximum(3.3, 1.4) << endl;
    cout << "Maximum('a', 'g'): " << maximum('a', 'g') << endl;
}