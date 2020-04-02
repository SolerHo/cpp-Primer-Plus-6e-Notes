/********************************************************************
 * 
 * Date : 2020 - 04 - 02
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 07 
 * 
 * description : 一个递归调用的递归函数
 * 
 * 什么是递归？
 * 
 * 自己调用自己的函数（C++中。main()函数不允许调用自己）叫做递归。
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

void countdown(int n);

int main()
{
    countdown(5); // 调用递归函数
    return 0;
}

void countdown(int n) // 每一个递归的调用都会创建一个变量，最终产生的的变量数是：n个。
{
    cout<<"倒计时......"<<n<<endl;
    if(n>0)
        countdown(n-1); // 自己调用自己的函数
    cout<<n<<":Kaboom!\n";
}
