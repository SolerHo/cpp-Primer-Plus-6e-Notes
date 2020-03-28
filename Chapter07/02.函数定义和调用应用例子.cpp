/********************************************************************
 * 
 * Date : 2020 - 03 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SEVEN
 * 
 * description : 函数定义和调用的例子
 * 
 ********************************************************************/

#include<iostream>

void simple(); // 函数原型

using namespace std;

int main()
{
    cout<<"main() 函数会调用simple() 函数\n";
    simple(); // 函数的调用
    cout<<"main() 函数完成对 simple() 函数的调用\n";

    return 0;
}

// 函数的声明
void simple()
{
    cout<<"这是一个简单的函数定义和调用的例子！\n";
}
