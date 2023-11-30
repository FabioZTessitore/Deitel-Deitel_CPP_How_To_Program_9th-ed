// ex6_38
// Towers of Hanoi

#include <iostream>
using std::cout;
using std::endl;

void hanoi(int nDisk, int from, int to, int temp);

int main()
{
    cout << "Towers of Hanoi" << endl;

    hanoi(3, 1, 3, 2);
}

void hanoi(int nDisk, int from, int to, int temp)
{
    if (nDisk == 1)
    {
        cout << from << " -> " << to << endl;
        return;
    }

    hanoi(nDisk - 1, from, temp, to);
    hanoi(1, from, to, temp);
    hanoi(nDisk - 1, temp, to, from);
}