// Fig. 4.9: GradeBook.cpp
// Member-function definitions for class GradeBook that solves the
// class average program with counter-controlled repetition

#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name)
{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
    if (name.size() <= 25)
        courseName = name;
    else
    {
        courseName = name.substr(0, 25);
        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
             << "Limiting courseName to first 25 characters.\n"
             << endl;
    }
}

string GradeBook::getCourseName() const
{
    return courseName;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n"
         << getCourseName()
         << "!" << endl;
}

void GradeBook::determineClassAverage() const
{
    int total = 0;
    unsigned int gradeCounter = 1;

    while (gradeCounter <= 10)
    {
        cout << "Enter grade: ";
        int grade = 0;
        cin >> grade;
        total = total + grade;
        gradeCounter = gradeCounter + 1;
    }

    int average = total / 10;

    cout << "\nTotal of all 10 grade is " << total << endl;
    cout << "Class average is " << average << endl;
}