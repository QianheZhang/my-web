#include <iostream>
#include "Gradebook.h"
using namespace std;
GradeBook::GradeBook(string coursename,string teachername)
    :CourseName(coursename),TeacherName(teachername)
{
}
    void GradeBook::setCourseName(string coursename)
{
    CourseName=coursename;
}
    string GradeBook::getCoursename()const
{
    return CourseName;
}
    void GradeBook::setTeacherName(string teachername)
{
    TeacherName=teachername;
}
    string GradeBook::getTeacherName()const
{
    return TeacherName;
}
    void GradeBook::displayMessage()const
{
    cout<<"Welcome to the grade book for \n"<<getCoursename()<<"!"<<"\nThis Course is prsented by "<<getTeacherName()<<endl;
}

