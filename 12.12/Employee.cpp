#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(const string &dirst,const string &last,const string&ssn)
:firstName (first),lastName(last),socialSecurityNumber(ssn)
{

}

void Employee::setFirstName(const string &first)
{
    firstName=first;
}

string Employee::getFirstName()const
{
    return firstName;
}

void Employee::setlastName(const string &last)
{
    lastName=last;
}

string Employee::getlastName()const
{
    return lastName;
}

void Employee::setsocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber=ssn;
}

string Employee::getsocialSecurityNumber()const
{
    return socialSecurityNumber;
}

void Employee::print()const
{
    cout<<getFirstName()<<' '<<getlastName()
    <<"\nsocial security number: "<<getsocialSecurityNumber();
}
