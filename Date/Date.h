#include <string>

class Date
{
    public:
    explicit Date(int,int,int);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void displayDate() const;

    private:
    int day;
    int month;
    int year;
};