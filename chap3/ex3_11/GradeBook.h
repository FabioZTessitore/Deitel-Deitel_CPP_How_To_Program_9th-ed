// GradeBook.h

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