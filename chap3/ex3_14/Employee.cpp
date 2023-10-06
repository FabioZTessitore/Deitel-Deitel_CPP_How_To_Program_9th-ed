// Employee.cpp

#include <string>
#include "Employee.h"
using std::string;

Employee::Employee()
{
    firstname = "";
    lastname = "";
    monthly_salary = 0;
}

std::string Employee::getFirstname() const
{
    return firstname;
}

void Employee::setFirstname(std::string name)
{
    firstname = name;
}

std::string Employee::getLastname() const
{
    return lastname;
}

void Employee::setLastname(std::string name)
{
    lastname = name;
}

int Employee::getMonthlySalary() const
{
    return monthly_salary;
}

int Employee::getYearlySalary() const
{
    return monthly_salary * 12;
}

void Employee::setSalary(int salary)
{
    if (salary < 0)
    {
        monthly_salary = 0;
        return;
    }

    monthly_salary = salary;
}

void Employee::raiseSalary(int raisePercentage)
{
    int salary = getMonthlySalary();
    salary += salary * raisePercentage / 100;
    setSalary(salary);
}
