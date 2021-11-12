// mytime10.h // 运算符重载
#ifndef MYTIME10_H__
#define MYTIME10_H__

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
        void show() const;
};
#endif