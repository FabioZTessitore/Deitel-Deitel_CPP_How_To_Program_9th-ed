// HeartRates.h

#include <string>

class HeartRates
{
public:
    HeartRates(std::string firstname, std::string lastname, int month, int day, int year);

    std::string getFirstname() const;
    std::string getLastname() const;
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    void setFirstname(std::string fname);
    void setLastname(std::string lname);
    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);

    int getAge(int actualYear) const;
    int getMaxHeartRate(int actualYear) const;
    void displayTargetHeartRate(int actualYear) const;

private:
    std::string firstname;
    std::string lastname;
    int month;
    int day;
    int year;
};
