#include <iostream>

using namespace std;

int main()
{
    cout<<"��������������: ";
    int x=0;
    int y=0;
    cin>>x>>y;
    if (x>y)
        cout<<x<<"is larger";
    if (x<y)
        cout<<y<<"is larger";
    if (x==y)
        cout<<"These numbers are equal";
    return 0;
}
