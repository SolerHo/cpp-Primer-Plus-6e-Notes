#include <iostream>
#include "mytime20.h"
//  计算时间的一个运算符重载例子
int main(void)
{
    using std::cout;
    using std::endl;
    Time weeding(4,35);
    Time waxing(2,47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "Weeding time = ";
    weeding.show();
    cout <<endl;

    cout << "waxing time = ";
    waxing.show();
    cout << endl;

    cout << " total work time = ";
    total = weeding + waxing; //使用operator+()
    total.show();
    cout << endl;

    diff = weeding - waxing;
    cout << "weeding time - waxing time = ";
    diff.show();
    cout << endl;

    adjusted = total * 1.5;
    cout << "adjusted work time = ";
    adjusted.show();
    cout << endl;

    return 0;
}