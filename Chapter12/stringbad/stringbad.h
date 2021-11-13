// stringbad.h --- flawed string class definition

#ifndef STRINGBAD_H__
#define STRINGBAD_H__
#include <iostream>
class StringBad
{
    private:
        char *str; // 字符串指针，不使用char数组，类声明不会为字符串本身分配存储空间，而是通过构造函数中使用new来为做饭吃分配空间。
        int len;                    // 字符串的长度
        static int num_strings;     // 静态存储类
    public:
        StringBad(const char * s);  // 构造函数
        StringBad();                // 默认构造函数
        ~StringBad();               // 析构函数
        // 友元函数 重载运算符 << 
        friend std::ostream & operator << (std::ostream & os,const StringBad & st);
};

#endif