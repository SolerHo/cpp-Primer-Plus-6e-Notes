// string1.h 
#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>

using std::ostream;
using std::istream;

class String
{
    private:
        char * str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;
    public:
        // 构造函数
        String(const char *s);
        String();
        String(const String &);
        ~String();
        int length() const {return len;}
        // 重载操作符方法
        String & operator=(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        const char & operator[](int i) const;
        // 友元函数重载
        friend bool operator<(const String &st1,const String &st2);
        friend bool operator>(const String &st1,const String &st2);
        friend bool operator==(const String &st,const String &st2);
        friend ostream & operator<<(ostream &os,const String &st);
        friend istream & operator>>(istream &is ,String &st);
        // 静态函数
        static int HowMany();
};
#endif
