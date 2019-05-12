#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t;
    t.setTime(23, 59, 58);
    for (int ticks = 1; ticks < 5; ++ticks)
    {
        t.printStandard();
        cout << endl;
        t.tick();
    }
}
