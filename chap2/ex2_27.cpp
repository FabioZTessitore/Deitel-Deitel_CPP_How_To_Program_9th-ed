// ex2_27.cpp
// Integer Equivalent of a Character

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
     char c;

     cout << "Enter a character: ";
     cin >> c;

     cout << static_cast<int>(c) << endl;

     return 0;
}