// GradeBook.cpp

#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string theCourseName, string theInstructorName)
    : courseName(theCourseName), instructorName(theInstructorName)
{
}

void GradeBook::setCourseName(string name)
{
    courseName = name;
}

void GradeBook::setInstructorName(string name)
{
    instructorName = name;
}

string GradeBook::getCourseName() const
{
    return courseName;
}

string GradeBook::getInstructorName() const
{
    return instructorName;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n"
         << getCourseName()
         << "!" << endl;
    cout << "This course is presented by: "
         << getInstructorName() << endl;
}