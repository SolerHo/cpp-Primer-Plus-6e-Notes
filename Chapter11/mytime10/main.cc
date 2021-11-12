#include <iostream>
#include "mytime10.h"
//  计算时间的一个运算符重载例子
int main(void)
{
    using std::cout;
    using std::endl;
    Time planing;
    Time coding(2,4);
    Time fixing(5,55);
    Time total;

    cout << "planning time = ";
    planing.show();
    cout << endl;

    cout << "coding time = ";
    coding.show();
    cout << endl;

    cout << "fixing time = ";
    fixing.show();
    cout << endl;

    total = coding + fixing;
    // 操作符
    cout << "coding + fixing = ";
    total.show();
    cout << endl;

    Time morefixing(3,28);
    cout << "more fixing time = ";
    morefixing.show();
    cout << endl;

    total = morefixing.operator +(total); //morefixing 隐式使用，而total显式使用
    // 函数符号
    cout << "morefixing.operator +(total) = ";
    total.show();
    cout << endl;

    return 0;
}