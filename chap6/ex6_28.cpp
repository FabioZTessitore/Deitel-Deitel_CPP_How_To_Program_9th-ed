// ex6_28
// Perfect Numbers

#include <iostream>
using std::cout;
using std::endl;

bool isPerfect(int number);

int main()
{
    cout << "Perfect Numbers" << endl;

    for (int i = 1; i < 10000; ++i)
    {
        if (isPerfect(i))
        {
            cout << i << " = ";
            for (int j = 1; j < i; ++j)
            {
                if (i % j == 0)
                {
                    cout << "+ " << j << " ";
                }
            }
            cout << endl;
        }
    }
}

bool isPerfect(int number)
{
    int s = 0;

    for (int i = 1; i < number; ++i)
    {
        if (number % i == 0)
        {
            s += i;
        }
    }

    return s == number;
}