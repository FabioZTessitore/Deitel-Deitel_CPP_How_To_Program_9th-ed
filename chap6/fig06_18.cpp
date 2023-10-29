// Fig. 6.18: fig06_18.cpp
// Functions that take no arguments

#include <iostream>
using namespace std;

void function1();
void function2(void);

int main()
{
    function1();
    function2();
}

void function1()
{
    cout << "function1 takes no arguments" << endl;
}

void function2(void)
{
    cout << "function2 also takes no arguments" << endl;
}