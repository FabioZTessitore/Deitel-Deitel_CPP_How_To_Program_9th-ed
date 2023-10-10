// ex4_18
// Tabular Output

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int n = 1;

    cout << "N\t10*N\t100*N\t1000*N\n"
         << endl;
    while (n <= 5)
    {
        cout << n << '\t' << 10 * n << '\t' << 100 * n << '\t' << 1000 * n << endl;
        n++;
    }
}