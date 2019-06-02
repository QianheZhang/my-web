#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
using namespace std;

void virtualViaPointer( const Employee * const );
void virtualViaReference( const Employee & );

int main()
{
    cout << fixed <<setprecision( 2 );

    SalariedEmployee commissionEmployee( "Sue", "Jones", "111-11-1111", 800 );
    CommissionEmployee commissionEmployee( "Bob", "Lewis", "444-44-4444", 10000, .06 );

    cout << "Employees processed individually using static binding:\n\n";
    salariedEmployee.print();
    cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
    commissionEmployee.print();
    cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";

    vector<Employee * > employees(2);

    employees[0] = &salariefEmployee;
    employees[1] =  &commissionEmployee;

    cout << "Employees processed polymorphically via dynamic binding:\n\n";
    cout << "Virtual function calls made off base-class pointers:\n\n";

    for( const Employee *employeePtr : employees )
        virtualViaPointer( employeePtr );

    cout << "Virtual function calls made off base-class references:\n\n";

    for ( const Employee *employeePtr : employees )
        virtualViaReference(*employeePtr );
}

void virtualViaPointer( const Employee * const baseClassPtr )
{
    baseClaeePtr->print();
    cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference ( const Employee &baseClassRef )
{
    baseClassRef.print();
    cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
}
