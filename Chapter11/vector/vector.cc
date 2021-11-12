// vector 

#include <cmath>
#include "vector.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    // 用弧度计算角度
    const double Rad_to_deg = 45 / atan(1.0);
    //私有方法从x和y来计算magnitude 
    void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }
    void Vector::set_ang()
    {
        if(x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y,x);
    }
    void Vector::set_x()
    {
        x = mag * cos(ang);
    }
    void Vector::set_y()
    {
        y = mag * sin(ang);
    }
    Vector::Vector()
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }
    Vector::Vector(double n1,double n2,Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if(form == POL)
        {
            mag = n1;
            ang = n2;
            set_x();
            set_y();
        }
        else
        {
            cout << "Incorrect 3rd argument to vector() ---";
            cout << "Vector set to 0 \n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }
    void Vector::reset(double n1,double n2,Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if(form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout << "Incorrect 3rd argument to vector() ---";
            cout << "Vector set to 0 \n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }        
    }
    Vector::~Vector() //析构函数
    {
    }
    void Vector::polar_mode()
    {
        mode = POL;
    }
    void Vector::rect_mode()
    {
        mode = RECT;
    }
    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x,y + b.y);
    }
    // 运算符重载是通过函数来实现，所以只要运算符函数的特征标不同，使用的运算符数量与相应的内置C++运算符相同，则可以多次重载同一个运算符
    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x,y - b.y); //二元操作版本
    }
    Vector Vector::operator-() const
    {
        return Vector(-x,-y); //一元操作版本
    }
    Vector Vector::operator*(double n) const
    {
        return Vector(n * x ,n * y);
    }
    Vector operator*(double n,const Vector & a)
    {
        return a * n;
    }
    std::ostream & operator <<(std::ostream & os,const Vector & v)
    {
        if (v.mode == Vector::RECT) //由于operator<<() 是一个友元函数，而不在类作用域内，则必须使用Vector::RECT，而不是使用RECT
            os << "(x,y) = (" <<v.x << ", " << v.y << ")";
        else if(v.mode == Vector::POL)
        {
            os << "(m,a) = ("<< v.mag << ", "
                << v.ang * Rad_to_deg << ")";
        }
        else
            os << " Vector object mode is invalid";
        return os;
    }
} //end namespace VECOTR
