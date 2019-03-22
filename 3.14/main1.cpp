#include <iostream>
#include "Employee.h"
using namespace std;
int main()
{
   Employee a("Qianhe","Zhang",8000);
   Employee b("Yudong","Qiu",9000);
   cout<<"Yearly salaries:"<< endl;
   int monthlysalary1=a.getMonthlySalary();
   cout<<a.getFirstName()<<" "<<a.getLastName()<<":"<<monthlysalary1*12<<"yuan"<< endl;
   int monthlysalary2=b.getMonthlySalary();
   cout << b.getFirstName()<<" "<<b.getLastName()<< ":" << monthlysalary2 * 12 <<"yuan"<< endl;

   a.setMonthlySalary(monthlysalary1+monthlysalary1/10);
   b.setMonthlySalary(monthlysalary2+monthlysalary2/10);

   cout<<"\nYearly salaries after 10% raise:"<<endl;
   monthlysalary1=a.getMonthlySalary();
   cout<<a.getFirstName()<<" "<<a.getLastName()<<":"<<monthlysalary1*12<<"yuan"<<endl;
   monthlysalary2 =b.getMonthlySalary();
   cout <<b.getFirstName() << " " << b.getLastName()<< ":" << monthlysalary2 * 12 <<"yuan"<< endl;
}

