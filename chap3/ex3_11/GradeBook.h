// Fig. 3.11: GradeBook.h
// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp

#include <string>

class GradeBook
{
public:
    explicit GradeBook(std::string theCourseName, std::string theInstructorName);
    void setCourseName(std::string name);
    void setInstructorName(std::string name);
    std::string getCourseName() const;
    std::string getInstructorName() const;
    void displayMessage() const;

private:
    std::string courseName;
    std::string instructorName;
};