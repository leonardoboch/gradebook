#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class GradeBook
{
public:
    GradeBook(string name, string instructor);
    void setCourseName(string name);
    void setInstructorName(string instructor);
    string getInstructorName();
    string getCourseName();
    void displayMessage();
private:
    string courseName;
    string instructorName;
};



#endif // GRADEBOOK_H_INCLUDED
