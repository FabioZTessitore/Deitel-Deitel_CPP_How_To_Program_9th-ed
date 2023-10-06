// ex3_14
// Employee Class

#include <iostream>
#include "Employee.h"
using std::cout;
using std::endl;

int main()
{
    Employee e1;
    e1.setSalary(1000);

    Employee e2;
    e2.setSalary(1500);

    cout << "e1 salary: " << e1.getYearlySalary() << endl;
    cout << "e2 salary: " << e2.getYearlySalary() << endl;

    cout << endl;

    cout << "Giving each employee 10% raise" << endl;
    e1.raiseSalary(10);
    e2.raiseSalary(10);

    cout << "e1 salary: " << e1.getYearlySalary() << endl;
    cout << "e2 salary: " << e2.getYearlySalary() << endl;

    return 0;
}
