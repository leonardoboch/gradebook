#include"Gradebook.h"
int main()
{
    GradeBook myBook1("Course one", "Amadeus");
    GradeBook myBook2("Course two", "Beethoven");
    cout << "Grade book 1 created for " << myBook1.getCourseName() << endl;
    cout << "Grade book 2 created for " << myBook2.getCourseName() << endl;
    myBook1.displayMessage();
    myBook2.displayMessage();
    cout << "Hello world!" << endl;
    return 0;
}
