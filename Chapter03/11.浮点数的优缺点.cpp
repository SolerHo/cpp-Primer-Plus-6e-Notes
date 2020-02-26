/********************************************************************
 * 
 * Date : 2020 - 02 - 26
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  浮点数的优缺点
 * 
 * 两个优点：
 * 1.表示整数之间的值
 * 2.有缩放因子
 * 
 * 缺点：
 * 
 * 浮点数的速度通常比整数运算慢，而且精度完全降低。
 * 
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int main()
{
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout<<"a = "<<a<<endl;
    cout<<"b - a = "<<b-a<<endl;

    return 0;
}
