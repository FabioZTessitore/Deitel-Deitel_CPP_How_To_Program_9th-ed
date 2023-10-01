// ex3_11.cpp
// Modifying Class GradeBook

#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
    GradeBook gradeBook("CS101 Introduction to C++ Programming", "Prof. Foo Var");
    gradeBook.displayMessage();

    return 0;
}