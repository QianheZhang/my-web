#include <iostream>
#include "Time.h"
using namespace std;
int main()
{
    Time t;
    cout << "The universal time is:";
    t.printUniversal();
    cout << "The standard time is:";
    t.printStandard();
    cout << endl;
}
