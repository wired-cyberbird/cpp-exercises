#include <iostream>
#include <iomanip>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name, string professor)
{
    setCourseName(name);
    setInstructorName(professor);
}

void GradeBook::setCourseName(string name)
{
    if(name.size() <= 25)
        courseName = name;
    else{
        courseName = name.substr(0,25);
        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

void GradeBook::setInstructorName(string professor)
{
    instructor = professor;
}

string GradeBook::getCourseName() const
{
    return courseName;
}

string GradeBook::getInstructorName() const
{
    return instructor;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    cout << "This course is presented by: " << getInstructorName() << endl;
}

void GradeBook::determineClassAverage() const
{
    int total = 0;
    unsigned int gradeCounter = 1;

    cout << "Enter grade or -1 to quit: ";
    int grade = 0;
    cin >> grade;

    while (grade != -1)
    {
        total = total + grade;
        gradeCounter = gradeCounter + 1;
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }
    
    if(gradeCounter != 0)
    {
        double average = static_cast<double>(total) / gradeCounter;
        
        cout << "\nTotal of all " << gradeCounter << " grades entered is "
            << total << endl;

        cout << setprecision(2) << fixed;
        cout << "Class average is " << average << endl;
    }
    else
    {
        cout << "No grades were entered" << endl;
    }    
}