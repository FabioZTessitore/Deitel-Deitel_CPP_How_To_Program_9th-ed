// ex5_18.cpp
// Number Systems Table

#include <iostream>
#include <iomanip>
#include <bitset>
using std::bitset;
using std::cout;
using std::dec;
using std::endl;
using std::hex;
using std::oct;
using std::setfill;
using std::setw;

int main()
{
    cout << setw(3) << "DEC";
    cout << setw(9) << "BIN";
    cout << setw(4) << "OCT";
    cout << setw(4) << "HEX" << endl;
    for (unsigned int n = 0; n < 256; ++n)
    {
        cout << setw(3) << setfill('0') << dec << n << ' ';
        cout << setw(8) << setfill('0') << bitset<8>(n) << ' ';
        cout << setw(3) << setfill('0') << oct << n << ' ';
        cout << setw(2) << setfill('0') << hex << n;
        cout << endl;
    }
}