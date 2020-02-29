/********************************************************************
 * 
 * Date : 2020 - 02 - 29
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  将数组解释为地址
 * 
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int main()
{
    /**指针和数组基本等价的原因：指针算术(pointer arithmetic) 和C++ 内部处理数组的方式*/
    double wages[3] = {10.0,20.0,30.0};
    short stacks[3] = {1,2,3};

    // 获取数组地址的两种方式
    double * pw = wages; // 数组名 = 地址 ;将pw声明为指向double类型的指针。然后将其初始化为wages - - - wages数组中第一个元素的地址。

    short * ps = &stacks[0]; // 使用地址操作；使用地址运算符来将ps指针初始化为stacks数组的第一个元素。

    // 使用数组元素
    cout<<"pw = "<<pw<<", *pw = "<<*pw<<endl;

    pw = pw + 1; // 将指针变量加1后，其增加的值等于指向的类型占用的字节数。
    
    cout<<"add 1 to the pw pointer:\n";
    cout<<"pw = "<<pw<<", *pw = "<<*pw<<endl;
    cout<<"ps = "<<ps<<", *ps = "<<*ps<<endl;

    ps = ps + 1; 
    cout<<"add 1 to the ps pointer:\n";
    cout<<"ps = "<<ps<<", *ps = "<<*ps<<"\n\n";

    cout<<"Access two elements with array notation\n";
    cout<<"stacks[0] = "<<stacks[0]<<",stacks[1] = "<<stacks[1]<<endl;
    
    cout<<"Access two elements with array notation\n";
    cout<<"stacks = "<<*stacks<<", *(stacks + 1） = "<<*(stacks + 1)<<endl;

    
    cout<<sizeof(wages)<<" = size of wages array\n"; // 对数组应用sizeof运算符得到的是数组的长度
    cout<<sizeof(pw)<<" = size of pw pointer:\n"; // 对指针应用sizeof运算符得到的是指针的长度

    return 0;

}