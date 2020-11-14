#include <string>

class HeartRates
{
    public:
    explicit HeartRates(std::string,std::string,int,int,int);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    std::string getFirstName() const;
    std::string getLastName() const;
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    int getActualDate() const;
    int getAge() const;
    int getMaximumHeartRate() const;
    int getTargetHeartRate() const;
    private:
    std::string firstName;
    std::string lastName;
    int day;
    int month;
    int year;

};