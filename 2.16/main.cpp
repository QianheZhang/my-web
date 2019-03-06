#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int sum =0;
    int a =0;
    int b =0;
    int c =0;
    cout << "输入两个数: " ;
    cin >> x >>y;
    sum=x+y;
    a=x*y;
    b=x-y;
    c=x/y;
    cout <<"加是: "<<sum;
    cout <<"乘积是: "<<a;
    cout <<"减是: "<<b;
    cout<<"商是: "<<c;
    return 0;
}
