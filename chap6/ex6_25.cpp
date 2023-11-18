// ex6_25
// Calculating Number of Seconds

#include <iostream>
using std::cout;
using std::endl;

int seconds(int hours, int minutes, int seconds);

int main()
{
    cout << "Amount of seconds between two times\n"
         << endl;

    cout << "Time 1 --- 09:07:00" << endl;
    int t1 = seconds(9, 7, 0);

    cout << "Time 2 --- 11:15:00" << endl;
    int t2 = seconds(11, 15, 0);

    int dt = t2 - t1;
    cout << "t2 - t1: " << dt << endl;
}

int seconds(int hours, int minutes, int seconds)
{
    return hours * 3600 + minutes * 60 + seconds;
}