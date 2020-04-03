/********************************************************************
 * 
 * Date : 2020 - 04 - 03
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 08 
 * 
 * description : 利用引用的方式计算立方
 * 
 * 为什么推荐使用const？
 * 1.避免无意中修改数据的编程错误。
 * 2.使函数能够处理const和非const实参，否则只能接受非const数据。
 * 3.使用const引用使函数能够正确生成并使用临时变量。
 * 
 * 所以，尽可能将引用形参声明为const。
 ********************************************************************/
#include<iostream>

using namespace std;

double cube(double a);
double refcube(const double &ra); // 使用const的目的：防止引用的参数被修改。

int main()
{
    double x = 3.0;
    cout<<x<<" 的立方为: "<<cube(x)<<endl;
    cout<<x<<" 的立方为："<<refcube(x)<<endl;
    return 0;
}
double cube(double a)
{
    return a*a*a;
}
double refcube(const double &ra)
{
    return ra*ra*ra;
}