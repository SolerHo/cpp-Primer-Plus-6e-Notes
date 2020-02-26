/********************************************************************
 * 
 * Date : 2020 - 02 - 26
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  基本算术计算
 * 
 * 五种基本运算符进行基本的算术运算。
 * 加（+）、减（-）、乘（*）、除（/）、求模（%）
 * 
 * 注意点：浮点数没有求模运算
 * 
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    float a ,b;

    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout<<"请输入一个数：";
    cin>>a;
    cout<<"请输入另一个数字：";
    cin>>b;

    cout<<"a = "<<a<<";"<<"b = "<<b<<endl;

    cout<<"a + b = "<<a + b<<endl;
    cout<<"a - b = "<<a - b<<endl;
    cout<<"a * b = "<<a * b<<endl;
    cout<<"a / b = "<<a / b<<endl;

    return 0;
}
