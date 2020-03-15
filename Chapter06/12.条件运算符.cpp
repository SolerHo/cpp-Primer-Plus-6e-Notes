/********************************************************************
 * 
 * Date : 2020 - 03 - 06
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  条件运算符(:?)
 * 
 * 一般用来替代if else语句。从代码可读性来说，条件运算符适合简单关系和简单表达式的值
 * 
 * 条件运算符的通用格式：
 * expression01?expression02:expression03
 * 
 * 如果expression01为true，则整个条件表达式的值为expression02的值，否则，整个表达式的值为expression03的值。
 * 
 ********************************************************************/
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"请输入两个数字：";
    cin>>a>>b;

    cout<<"比较 "<<a<<" 和 "<<b;
    int c = a>b?a:b; // c= a if a>b,else c = b
    cout<<" 中，最大的值是： "<<c<<endl;

    return 0;
}
