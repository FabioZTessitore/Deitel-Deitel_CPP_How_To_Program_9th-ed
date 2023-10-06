// Date.h

class Date
{
public:
    Date(int m, int d, int y);

    int getMonth() const;
    int getDay() const;
    int getYear() const;

    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);

    void displayDate() const;

private:
    int month;
    int day;
    int year;
};