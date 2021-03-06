#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>
#include "Employee.h"

class CommissionEmployee : public Employee
{
public:
    CommissionEmployee( const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0 );
    virtual ~CommissionEmployee() {}

    coid setCommissionRate ( double );
    double getCommissionRate() const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    double grossSales;
    double commissionRate;
};
#endif // COMMISSION_H


