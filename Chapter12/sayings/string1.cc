// string1.cc //String类方法
#include <cstring>
#include "string1.h"

using std::cout;
using std::cin;

//静态变量初始化
int String::num_strings = 0;

// 静态方法初始化
int String::HowMany()
{
    return num_strings;
}

// 类方法实现
String::String(const char *s)
{
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    num_strings++;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str,st.str);
}

String::~String()
{
    --num_strings;
    delete [] str;
}

String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str,st.str);
    return *this;
}

String & String::operator=(const char * st)
{
    delete [] str;
    len = std::strlen(st);
    str = new char[len+1];
    std::strcpy(str,st);
    return *this;
}

char & String::operator[](int i)
{
    return str[i];
}

const char & String::operator[](int i) const
{
    return str[i];
}

// 友元函数的重载
bool operator<(const String &st1,const String &st2)
{
    return (std::strcmp(st1.str,st2.str)<0);
}

bool operator>(const String &st1,const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1,const String &st2)
{
    return (std::strcmp(st1.str,st2.str)==0);
}

ostream & operator<<(ostream &os,const String &st)
{
    os << st.str;
    return os;
}

istream & operator>>(istream &is,String &st)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get()!='\n')
        continue;
    return is;
}