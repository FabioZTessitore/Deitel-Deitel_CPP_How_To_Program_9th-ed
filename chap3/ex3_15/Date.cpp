// Date.h

#include <iostream>
#include "Date.h"
using std::cout;
using std::endl;

Date::Date(int m, int d, int y)
{
    setDay(d);
    setMonth(m);
    setYear(y);
}

int Date::getMonth() const
{
    return month;
}

int Date::getDay() const
{
    return day;
}

int Date::getYear() const
{
    return year;
}

void Date::setMonth(int m)
{
    if (m < 1 || m > 12)
    {
        month = 1;
        return;
    }

    month = m;
}

void Date::setDay(int d)
{
    day = d;
}

void Date::setYear(int y)
{
    year = y;
}

void Date::displayDate() const
{
    cout << month << "/" << day << "/" << year << endl;
}
