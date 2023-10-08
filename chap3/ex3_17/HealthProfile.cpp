// HealthProfile.cpp

#include <iostream>
#include <string>
#include "HealthProfile.h"
using std::cin;
using std::cout;
using std::string;

HealthProfile::HealthProfile(string theFirstname, string theLastname, string theGender, int theDayOfBirth, int theMonthOfBirth, int theYearOfBirth, int theHeight, int theWeight)
{
    setFirstname(theFirstname);
    setLastname(theLastname);
    setGender(theGender);
    setDayOfBirth(theDayOfBirth);
    setMonthOfBirth(theMonthOfBirth);
    setYearOfBirth(theYearOfBirth);
    setHeight(theHeight);
    setWeight(theWeight);
}

string HealthProfile::getFirstname() const { return firstname; }
string HealthProfile::getLastname() const { return lastname; }
string HealthProfile::getGender() const { return gender; }
int HealthProfile::getDayOfBirth() const { return dayBirth; }
int HealthProfile::getMonthOfBirth() const { return monthBirth; }
int HealthProfile::getYearOfBirth() const { return yearBirth; }
int HealthProfile::getHeight() const { return height; }
int HealthProfile::getWeight() const { return weight; }

void HealthProfile::setFirstname(string theFirstname)
{
    firstname = theFirstname;
}

void HealthProfile::setLastname(string theLastname)
{
    lastname = theLastname;
}

void HealthProfile::setGender(string theGender)
{
    gender = theGender;
}

void HealthProfile::setDayOfBirth(int theDayOfBirth)
{
    if (theDayOfBirth < 1 || theDayOfBirth > 31)
        return;

    dayBirth = theDayOfBirth;
}

void HealthProfile::setMonthOfBirth(int theMonthOfBirth)
{
    if (theMonthOfBirth < 1 || theMonthOfBirth > 12)
        return;

    monthBirth = theMonthOfBirth;
}

void HealthProfile::setYearOfBirth(int theYearOfBirth)
{
    if (theYearOfBirth < 1900)
        return;

    yearBirth = theYearOfBirth;
}

void HealthProfile::setHeight(int theHeight)
{
    if (theHeight < 0)
        return;

    height = theHeight;
}

void HealthProfile::setWeight(int theWeight)
{
    if (theWeight < 0)
        return;

    weight = theWeight;
}

int HealthProfile::getAge(int actualYear) const
{
    return actualYear - getYearOfBirth();
}

int HealthProfile::getMaxHeartRate(int actualYear) const
{
    return 220 - getAge(actualYear);
}

int HealthProfile::getTargetMinHeartRate(int actualYear) const
{
    return (int)(.5 * getMaxHeartRate(actualYear));
}

int HealthProfile::getTargetMaxHeartRate(int actualYear) const
{
    return (int)(.85 * getMaxHeartRate(actualYear));
}

double HealthProfile::getBMI() const
{
    return getWeight() * 703 / (getHeight() * getHeight());
}
