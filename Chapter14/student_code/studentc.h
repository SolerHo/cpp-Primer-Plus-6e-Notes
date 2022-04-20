// studentc.h 使用包含 定义一个学生类
#ifndef STUDNET_H_
#define STUDENT_H_

#include <iostream>
#include <string>
#include <valarray>

class Student
{
    private:
        typedef std::valarray<double> ArrayDb;
        std::string name;
        ArrayDb scores;
        // private method for scores output
        std::ostream & arr_out(std::ostream & os) const
    public:
        // 使用组合的方式，而不是使用继承的方式
        Student() : name("Null Student"),scores() {}
        explicit Student (const std::string & s)
            : name(s),scores(s) {}
        explicit Student(int n) : name("Nully"),scores(n) {} // 第一个参数表示数组的元素个数，而不是数组中的值

        Student(const std::string & s, int n)
            : name(s),scores(n) {}
        Student(const std::string & s, const ArrayDb & a)
            : name(s),scores(a) {}
        // 对于继承的对象，构造函数在成员初始化列表中使用类名来调用特定的基类构造函数。对于成员对象，构造函数则使用成员名
        Student(const char * str, const double * pd, int n) // 当初始化列表包含多个项目时，被初始化的顺序为声明的顺序，而不是在初始化列表中的顺序
            : name(str), scores(pd,n) {} // 初始化的成员对象，不是继承的对象，所以在初始化列表中使用的是成员名，而不是类名
        ~Student() {}
        double Average() const;
        const std:string & Name() const; // 
        double & operator[] (int i);
        double operator[] (int i) const;

        // 友元函数
        friend std::istream & operator >> (std::istream & is,
                                            Student & stu); // 
        friend std::istream & getline(std::istream & is, 
                                    Student & stu);
        friend std::ostream * operator <<(std::ostream & os
                                        const Student & stu);
};
#endif
