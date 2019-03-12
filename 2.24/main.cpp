#include <iostream>

using namespace std;

int main()
{
    cout<<"Input one intergers: ";
    int a,b;
    cin >>a;
    b=a%2;
    if(b==0)
        cout<<"该数为偶数";
    else
        cout<<"该数为奇数";
    return 0;
}
