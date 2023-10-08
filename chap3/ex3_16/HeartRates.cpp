// HeartRates.cpp

#include <iostream>
#include <string>
#include "HeartRates.h"
using std::cout;
using std::endl;
using std::string;

HeartRates::HeartRates(string firstname, string lastname, int month, int day, int year)
{
    setFirstname(firstname);
    setLastname(lastname);
    setMonth(month);
    setDay(day);
    setYear(year);
}

string HeartRates::getFirstname() const
{
    return firstname;
}

string HeartRates::getLastname() const
{
    return lastname;
}

int HeartRates::getMonth() const
{
    return month;
}

int HeartRates::getDay() const
{
    return day;
}

int HeartRates::getYear() const
{
    return year;
}

void HeartRates::setFirstname(string fname)
{
    firstname = fname;
}

void HeartRates::setLastname(string lname)
{
    lastname = lname;
}

void HeartRates::setMonth(int m)
{
    if (m < 1 || m > 12)
        return;

    month = m;
}

void HeartRates::setDay(int d)
{
    if (d < 1 || d > 31)
        return;

    day = d;
}

void HeartRates::setYear(int y)
{
    if (y < 1900)
        return;

    year = y;
}

int HeartRates::getAge(int actualYear) const
{
    return actualYear - year;
}

int HeartRates::getMaxHeartRate(int actualYear) const
{
    return 220 - getAge(actualYear);
}

void HeartRates::displayTargetHeartRate(int actualYear) const
{
    int maxHeartRate = getMaxHeartRate(actualYear);
    int targetMinHeartRate = (int)(.5 * maxHeartRate);
    int targetMaxHeartRate = (int)(.85 * maxHeartRate);
    cout << "Target Heart Rate " << targetMinHeartRate << " - " << targetMaxHeartRate << endl;
}
