/********************************************************************
 * 
 * Date : 2020 - 03 - 04
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  do while循环
 * 
 * do while循环是出口条件循环
 * 
 * 首先执行循环体，然后在判断测试表达式，决定是否应继续执行循环体。如果条件为false，则循环终止，否则进行下一轮的执行和测试
 * 
 * 
 ********************************************************************/

#include<iostream>

using namespace std; 

int main()
{
    int n;

    cout<<"输入最喜欢的一个数字（在1 - 10 之间）：";
    do
    {
        cin>>n; 
    }while(n!=7); // 测试部分
    cout<<"对的，7 是我最喜欢的数字！\n";

    return 0;
}