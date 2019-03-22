#include <iostream>
#include "Employee.h"
using namespace std;
Employee::Employee( string f, string l, int salary )
{
   setFirstName(f);
   setLastName(l);
   setMonthlySalary(salary);
}
void Employee::setFirstName(string name)
{
   firstname=name;
}
string Employee::getFirstName()
{
   return firstname;
}
void Employee::setLastName(string name)
{
   lastname=name;
}
string Employee::getLastName()
{
   return lastname;
}
void Employee::setMonthlySalary(int salary)
{
   if (salary>0)
      monthlysalary=salary;

   if (salary<=0)
      monthlysalary=0;
}
int Employee::getMonthlySalary()
{
   return monthlysalary;
}
