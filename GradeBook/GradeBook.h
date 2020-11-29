#include <string>

class GradeBook
{
    public:
    explicit GradeBook(std::string, std::string);
    void setCourseName(std::string);
    void setInstructorName(std::string);
    std::string getCourseName() const;
    std::string getInstructorName() const;
    void displayMessage() const;
    void determineClassAverage() const;
    void inputGrades();
    void displayGradeReport() const;
    private:
    std::string courseName;
    std::string instructor;
    unsigned int aCount;
    unsigned int bCount;
    unsigned int cCount;
    unsigned int dCount;
    unsigned int fCount;
    unsigned int pointA;
    unsigned int pointB;
    unsigned int pointC;
    unsigned int pointD;
    unsigned int pointF;
    double totalPoints;
};