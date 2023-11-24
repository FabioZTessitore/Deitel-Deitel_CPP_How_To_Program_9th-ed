// ex6_32
// Quality Points for Numeric Grades

#include <iostream>
using std::cout;
using std::endl;

int qualityPoints(int average);

int main()
{
    int average = 97;

    cout << "Average: " << average << endl;
    cout << "Quality Points: " << qualityPoints(average) << endl;
}

int qualityPoints(int average)
{
    if (average >= 90 and average <= 100)
    {
        return 4;
    }
    else if (average >= 80)
    {
        return 3;
    }
    else if (average >= 70)
    {
        return 2;
    }
    else if (average >= 60)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}