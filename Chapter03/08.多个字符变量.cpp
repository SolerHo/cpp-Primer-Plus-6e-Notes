/********************************************************************
 * 
 * Date : 2020 - 02 - 26
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  多个字符变量
 * 
 * 
 * cin和cout的输入和输出都是由变量类型引导的。
 * 
 * 对C++而言，字符 ———— 单引号；字符串 ———— 双引号
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int main()
{
    char ch = 'M';
    int i = ch;
    cout<<"The ASCII code for"<<ch<<" is "<<i<<endl;

    cout<<"Add one to the character code:"<<endl;
    ch = ch + 1;
    i = ch;
    cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;

    /*使用cout.put() 去展示字符串常量*/
    cout<<"使用cout.put()展示字符串常量"<<endl;
    cout.put(ch); // 成员函数cout.put() ———— C++ OOP概念中的成员函数，成员函数归类所有，描述了操作数据的方法。

    cout.put('!'); // . 句点被称为成员运算符

    cout<<endl<<"Done"<<endl;

    return 0;
}