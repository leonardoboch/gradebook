#include"Gradebook.h"
GradeBook::GradeBook(string name, string instructor)
{
    setCourseName(name);
    setInstructorName(instructor);
}
void GradeBook::setCourseName(string name)
{
    if(name.length() <= 25)
    {
        courseName = name;
    }
    if(name.length() > 25)
    {
        courseName = name.substr(0,25);
        cout << "Name\"" << name << "exceedes maximum length (25).\n" << endl;
    }
}
string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::setInstructorName(string instructor)
{
    instructorName = instructor;
}
string GradeBook::getInstructorName()
{
    return instructorName;
}
void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for :: " << getCourseName() << endl;
    cout << "This course is presented by :: " << getInstructorName() << endl;
}
