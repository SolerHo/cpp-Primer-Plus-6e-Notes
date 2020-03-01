/********************************************************************
 * 
 * Date : 2020 - 03 - 01
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  递增运算符和递减运算符
 *
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    int a = 20;
    int b = 10;
    int c = 17;
    int d = 7;
    cout<<"a = "<<a++<<endl; // 使用a当前的值计算表达式，再将a的值加1
    cout<<"b = "<<++b<<endl; // 先将b的值加1，然后使用新的值来计算表达式。
    cout<<"c = "<<c--<<endl; // 使用a当前的值计算表达式，再将a的值减1
    cout<<"d = "<<--d<<endl;  // 先将b的值减1，然后使用新的值来计算表达式。

    return 0;

}