// ex6_42
// Distance Between Points

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

double distance(double x1, double y1, double x2, double y2);

int main()
{
    cout << "Distance between (0,3) and (4,0): "
         << distance(0, 3, 4, 0) << endl;
}

double distance(double x1, double y1, double x2, double y2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}