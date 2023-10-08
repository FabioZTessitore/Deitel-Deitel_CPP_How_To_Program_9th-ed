// HealthProfile.h

#include <string>

class HealthProfile
{
public:
    HealthProfile(std::string theFirstname, std::string theLastname, std::string theGender, int theDayOfBirth, int theMonthOfBirth, int theYearOfBirth, int theHeight, int theWeight);

    std::string getFirstname() const;
    std::string getLastname() const;
    std::string getGender() const;
    int getDayOfBirth() const;
    int getMonthOfBirth() const;
    int getYearOfBirth() const;
    int getHeight() const;
    int getWeight() const;

    void setFirstname(std::string theFirstname);
    void setLastname(std::string theLastname);
    void setGender(std::string theGender);
    void setDayOfBirth(int theDayOfBirth);
    void setMonthOfBirth(int theMonthOfBirth);
    void setYearOfBirth(int theYearOfBirth);
    void setHeight(int theHeight);
    void setWeight(int theWeight);

    int getAge(int actualYear) const;
    int getMaxHeartRate(int actualYear) const;
    int getTargetMinHeartRate(int actualYear) const;
    int getTargetMaxHeartRate(int actualYear) const;
    double getBMI() const;

private:
    std::string firstname;
    std::string lastname;
    std::string gender;
    int dayBirth;
    int monthBirth;
    int yearBirth;
    int height;
    int weight;
};