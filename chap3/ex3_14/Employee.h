// Employee.h

#include <string>

class Employee
{
public:
    Employee();

    std::string getFirstname() const;
    void setFirstname(std::string name);

    std::string getLastname() const;
    void setLastname(std::string name);

    int getMonthlySalary() const;
    int getYearlySalary() const;
    void setSalary(int salary);
    void raiseSalary(int raisePercentage);

private:
    std::string firstname;
    std::string lastname;
    int monthly_salary;
};