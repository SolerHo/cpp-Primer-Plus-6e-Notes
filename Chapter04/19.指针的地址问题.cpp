/********************************************************************
 * 
 * Date : 2020 - 02 - 28
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  指针的地址问题
 * 
 ********************************************************************/


#include<iostream>

using namespace std;

/**指针与C++基本原理
 * 
 * 面向对象编程和传统的过程性编程的区别
 * 
 * OOP强调的是运行阶段(而不是编译阶段)进行决策。
 * 
 * 运行阶段：程序正在运行是，取决于不同的情况。
 * 编译阶段：编译器将程序组合起来时。坚持原先设定的安排
 * 
 */

int main()
{
    int donuts = 6;
    double cups = 4.5;
    cout<<"donuts = "<<donuts<<" and donuts1 address = "<<&donuts<<endl;

    cout<<"cups value = "<<cups;
    cout<<" and cups address = "<<&cups<<endl; // 地址显示结果是十六进制表示法，因为都是常常描述内存的表示法

// 使用常规变量时，值是指定的量，而地址是派生量。


    return 0;
    
}