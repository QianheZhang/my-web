#include<iostream>
#include "Gradebook.h"
using namespace std;
int main()
{
    string nameofcourse;
    string nameofteacher;
    cout<<"Please enter the course name:";
    getline(cin,nameofcourse);
    cout<<"Please enter the teacher name:";
    getline(cin,nameofteacher);
    GradeBook Gradebook(nameofcourse,nameofteacher);
    Gradebook.displayMessage();
    return 0;
}
