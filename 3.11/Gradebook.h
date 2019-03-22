#include<string>
class GradeBook
{
public:
    GradeBook(std::string coursename,std::string teachername);
    void setCourseName(std::string);
    std::string getCoursename()const;
    void setTeacherName(std::string);
    std::string getTeacherName()const;
    void displayMessage()const;
private:
    std::string CourseName;
    std::string TeacherName;
    std::string coursename;
    std::string teachername;
};
