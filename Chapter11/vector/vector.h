// 使用 << 来实现矢量类

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>
namespace VECTOR
{
    class Vector
    {
        public:
            // 设置状态成员，状态成员描述对象所处的状态。
            enum Mode {RECT,POL};// RECT for rectangular, POL for Polar modes
        private:
            double x; // 水平值
            double y; // 垂直值
            double mag; //矢量的长度
            double ang; //矢量的方向角
            Mode mode; // RECT or POL
            // 私有方法来设置值
            void set_mag();
            void set_ang();
            void set_x();
            void set_y();
        public:
            Vector(); //默认构造函数
            Vector(double n1,double n2,Mode form = RECT);
            void reset(double n1,double n2,Mode form = RECT);
            ~Vector(); //析构函数
            double xval() const {return x;}
            double yval() const {return y;}
            double magval() const {return mag;}
            double angval() const {return ang;}
            void polar_mode();
            void rect_mode();
            // 操作符重载
            Vector operator+(const Vector & b) const;
            // operator- 重载，原因：特征标不同 
            Vector operator-(const Vector & b) const;
            Vector operator-() const;
            Vector operator *(double n) const;

            // 友元函数
            friend Vector operator *(double n,const Vector & a);
            friend std::ostream & operator<<(std::ostream & os,const Vector & v);
    }; //end namespace VECTOR
};

#endif