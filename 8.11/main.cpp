#include <iostream>

using namespace std;

int main()
{
    int *number;  //Need an address to number
    cout << number << endl;

    long *realPtr;
    long *integerPtr;
    integerPtr=realPtr;

    int *x,y;
    x=&y;

    char s[] = "this is a character array";
    int count;
    for (int t=0; s[t]!='\0'; t++)
    {
        cout << *s << ' ';
    }

    short *numPtr, result;
    void *generiPtr;//空类型指针不可引用其他

    double x=19.34;
    double *xPtr=&x;
    cout << xPtr << endl;
}
