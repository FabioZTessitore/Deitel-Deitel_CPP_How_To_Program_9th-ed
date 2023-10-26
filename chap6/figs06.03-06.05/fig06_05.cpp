// Fig. 6.5: fig06_05.cpp
// Create GradeBook object, input grades and display grade report

#include "GradeBook.h"

int main()
{
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();
}