// ex5.15
// GradeBook Modification

#include "GradeBook.h"

int main()
{
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();
    myGradeBook.displayGradesAverage();
}