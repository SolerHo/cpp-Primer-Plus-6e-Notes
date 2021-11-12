#include <iostream>
#include "mytime20.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h,int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h,int m)
{
    hours = h;
    minutes = m;
}
// operator +()函数的名称可使用函数表示法和运算表示法来调用它，编译器会根据操作数的类型来确定如何操作
Time Time::operator+(const Time & t) const //返回对象将创建对象的副本，则调用函数可以使用
{ //注意：参数是引用，但是返回类型不是引用，将参数声明为引用的目的：为了提高效率
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60; //整数除法
    sum.minutes %= 60; // 求模运算符
    return sum;
}


Time Time::operator-(const Time & t) const
{
    Time diff;
    int tot1,tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time Time::operator*(double mult) const
{
    Time result;
    long totalminutes = hours * mult * 60 + minutes * mult;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

void Time::show() const
{
    std::cout << hours << " hours , " << minutes << " minutes";
}