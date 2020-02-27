/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  程序中使用结构的例子
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

struct inflatable
{
    char name[20];
    int age;
    double height;
};

int main()
{
    /*
    变量可以在函数内部和外部定义，外部变量由于所有的函数共享。

    C++不提供使用外部变量，但提倡使用外部结构声明。
    */
    inflatable Jason =
    {
        "Jason HO",
        24,
        1.67
    };

    inflatable Soler = 
    {
        "Soler HO",
        22,
        1.85
    };
    
    cout<<"这两个人是："<<Jason.name<<" and "<<Soler.name<<";\n";
    cout<<"这两个人的年龄和是："<<Jason.age + Soler.age<<"!\n";

    return 0;
}
