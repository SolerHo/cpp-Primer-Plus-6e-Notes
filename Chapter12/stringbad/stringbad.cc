// stringbad.cc  ---- Stringbad class methods
#include <cstring>
#include "stringbad.h"
using std::cout;

//初始化静态类成员 ------ 不能在类声明中初始化静态成员变量（声明描述了如何分配内存，但不分配内存）。

int StringBad::num_strings = 0;

// 类方法，构造函数
StringBad::StringBad(const char * s)
{
    len = std::strlen(s); //计算字符串的长度，并对len成员进行初始化（strlen不包含末尾的空字符）
    str = new char(len+1); // 使用new来分配足够的空间保存字符串，则len + 1
    std::strcpy(str,s); // 将新的内存地址赋给str成员
    num_strings++; // 确保程序每创建一个新对象，变量值+1，从而记录String对象的总数
    cout << num_strings << ": \"" << str<< "\" Object created \n";
}

StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str,"C++");
    num_strings++;
    cout << num_strings << ": \"" << str<< "\" Object created \n";
}

StringBad::~StringBad() // 析构函数
{
    cout << "\"" << str << "\" object deleted , ";
    --num_strings; 
    cout << num_strings <<" left \n";
    delete [] str; // delete语句确保对象过期时，由构造函数使用new分配的内存被释放。
}

std::ostream & operator<<(std::ostream &os,const StringBad & st)
{
    os << st.str;
    return os;
}