/********************************************************************
 * 
 * Date : 2020 - 04 - 03
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 08
 * 
 * description : C++中的内联函数问题
 * 
 * 常规函数：使得程序调用跳转到另一个地址（函数的地址），并在函数结束时返回。
 * 
 * 内联函数：使用相应的函数代码替换函数调用
 * 
 * 使用内联函数必须有的步骤之一：
 * 1.在函数声明前加上关键字inline。
 * 2.在函数定义前加上关键字inline。
 * 
 * 一般的做法就是：省略了函数原型。
 * 
 * 对于函数定义时占用了多行。则不推荐使用内联函数。
 * 
 * 内联和宏的区别
 * 
 * 宏不能按值传递，而是通过文本替换来实现。
 * 
 * 内联函数直接进行参数传递
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

inline double square(double x){return x*x;}

int main()
{
    double a,b; 
    double c = 13.0;

    a = square(5.0);
    b = square(4.5+7.5); // 进行值的传递
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"c = "<<c;
    cout<<" ,square(c) = "<<square(c++)<<endl;

    cout<<"Now c = "<<c<<"\n";

    return 0;
}
