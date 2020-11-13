#include <iostream>
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

    if(name.size() > 25)
    {
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