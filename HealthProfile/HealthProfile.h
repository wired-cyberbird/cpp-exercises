#include <string>

class HealthProfile
{
    public:
    explicit HealthProfile(std::string,std::string,std::string,float,float,float,float,float);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setGender(std::string);
    void setDay(float);
    void setMonth(float);
    void setYear(float);
    void setHeight(float);
    void setWeight(float);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getGender() const;
    float getDay() const;
    float getMonth() const;
    float getYear() const;
    float getHeight() const;
    float getWeight() const;
    float getAge() const;
    float getMaximumHeartRate() const;
    float getTargetHeartRate() const;
    private:
    std::string firstName;
    std::string lastName;
    std::string gender;
    float day;
    float month;
    float year;
    float height;
    float weight;
};