#include <iostream>
#include "Account.h"
using namespace std;
int main()
{
   int a;
   Account account1( 100 );
   Account account2( 200);
   cout << "account1 balance:" << account1.getBalance() << "yuan"<<endl;
   cout << "account2 balance:" << account2.getBalance() << "yuan"<<endl;
   cout<<"debit or credit\n"<<"1:debit\n"<<"0:credit\n";
   cin>>a;
   if(a)
   {
        int withdrawAmount;
        cout << "\nEnter withdraw amount for account1: ";
        cin >> withdrawAmount;
        account1.debit( withdrawAmount );
        cout << "account1 balance:" << account1.getBalance() <<"yuan"<< endl;
        cout << "account2 balance:" << account2.getBalance() <<"yuan"<< endl;
        cout << "\nEnter withdrawal amount for account2: ";
        cin >> withdrawAmount;
        account2.debit( withdrawAmount );
        cout << "account1 balance:" << account1.getBalance() <<"yuan"<< endl;
        cout << "account2 balance:" << account2.getBalance() <<"yuan"<< endl;
   }
   else
   {
       int depositAmount;
        cout << "\nEnter deposit amount for account1: ";
        cin >> depositAmount;
        account1.debit( depositAmount );
        cout << "account1 balance:" << account1.getBalance() <<"yuan"<< endl;
        cout << "account2 balance:" << account2.getBalance() <<"yuan"<< endl;
        cout << "\nEnter deposit amount for account2: ";
        cin >> depositAmount;
        account2.debit( depositAmount );
        cout << "account1 balance:" << account1.getBalance() <<"yuan"<<endl;
        cout << "account2 balance:" << account2.getBalance() <<"yuan"<< endl;
   }
}

