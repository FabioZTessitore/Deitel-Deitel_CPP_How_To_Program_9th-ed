// Fig. 4.14: fig04_14.cpp
// Create GradeBook object and invoke its determineClassAverage function

#include "GradeBook.h"

int main()
{
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage();
    myGradeBook.determineClassAverage();
}