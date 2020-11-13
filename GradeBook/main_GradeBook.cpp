#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
    GradeBook gradeBook1("CS101 Introduction to C++ Programming", "Alexander");
    GradeBook gradeBook2("CS102 Data Structures in C++","Gustavo");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;

    gradeBook1.setCourseName("CS101 C++ Programming");

    cout << "\ngradeBook1's course name is: "
        << gradeBook1.getCourseName()
        << "\ngradeBook2's course name is: "
        << gradeBook2.getCourseName() << endl;

    gradeBook1.displayMessage();
}