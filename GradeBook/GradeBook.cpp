#include <iostream>
#include <iomanip>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name, string professor)
    : aCount(0),
        bCount(0),
        cCount(0),
        dCount(0),
        fCount(0)
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

void GradeBook::inputGrades()
{
    int grade;
    pointA = 4;
    pointB = 3;
    pointC = 2;
    pointD = 1;
    pointF = 0;
    totalPoints = 0;

    cout << "Enter the letter grades." << endl
        << "Enter the EOF character to end input." << endl;

    while((grade = cin.get()) != EOF)
    {
        switch (grade)
        {
        case 'A':
        case 'a':
            ++aCount;
            break;

        case 'B':
        case 'b':
            ++bCount;
            break;
        
        case 'C':
        case 'c':
            ++cCount;
            break;

        case 'D':
        case 'd':
            ++dCount;
            break;
        
        case 'F':
        case 'f':
            ++fCount;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;
        
        default:
            cout << "Incorrect letter grade entered."
                << " Enter a new grade." << endl;
            break;
        }

    }

    totalPoints = aCount + bCount + cCount + dCount + fCount;
}

void GradeBook::displayGradeReport() const
{
    cout << "\n\nNumber of Students who received each letter grade:"
        << "\nA: " << aCount
        << "\nB: " << bCount
        << "\nC: " << cCount
        << "\nD: " << dCount
        << "\nF: " << fCount
        << "\nAverage: " << totalPoints/5 
        << endl;
}