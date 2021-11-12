// mytime30.h // 运算符重载
#ifndef MYTIME30_H__
#define MYTIME30_H__
#include <iostream>
class  Time
{
    private:
        int hours;
        int minutes;
    public:
        Time(); //默认构造函数
        Time(int h,int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0, int m = 0);
        Time operator +(const Time & t) const; 
        Time operator -(const Time & t) const;
        Time operator *(double mult) const;
        friend Time operator*(double m,const Time & t){return t * m;}
        friend std::ostream & operator << (std::ostream & os,const Time & t);
        void show() const;
};
#endif