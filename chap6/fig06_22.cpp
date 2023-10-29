// Fig. 6.22: fig06_22.cpp
// Unary scope resolution operator

#include <iostream>
using namespace std;

int number = 7;

int main()
{
     double number = 10.5;

     cout << "Local double value of number = " << number
          << "\nGlobal int value of number = " << ::number << endl;
}