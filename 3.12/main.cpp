#include <iostream>
#include "Account.h"
using namespace std;
Account::Account(int remain)
{
    balance=0;
    if (remain>0)
        balance=remain;
    if (remain<0)
        cout<<"Invalid initial balance"<<endl;
}
void Account::credit(int money)
{
    balance+=money;
}
void Account::debit(int money)
{
    if (balance>=money)
        balance-=money;
    if (balance<money)
        cout<<"Debit amount exceeded account balance"<<endl;
}
int Account::getBalance()
{
    return balance;
}
