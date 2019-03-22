#include <iostream>
#include "Date.h"
using namespace std;
int main()
{
   int a,b,c;
   cout <<"Month: "<<endl;
   cin>>a;
   cout <<"Day: "<<endl;
   cin>>b;
   cout <<"Year: "<<endl;
   cin>>c;
   Date date(a,b,c);
   cout <<"Month: "<<date.getMonth()<<endl;
   cout <<"Day: "<< date.getDay()<<endl;
   cout <<"Year: "<< date.getYear()<<endl;

   cout<<"\nDate:" << endl;
   date.displayDate();
}
