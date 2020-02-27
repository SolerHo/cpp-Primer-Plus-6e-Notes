/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  面向行的输入：cin.get()
 * 
 * get()是istream类的成员函数
 * 
 * 与getline()类似，接受参数相同，解释参数的方式相同，而且都是读取到行尾。
 * 
 * 不同之处：get()不会读取，而且丢弃换行符。而是将换行符留在输入队列中。
 * 
 * 
 * ge()的另一种变体：使用不带任何参数的cin.get()调用可读取下一个字符（即使是换行符），因此用它来处理换行符，为读取下一行做好准备。
 * 
 * 使用get()的方式将两个类成员函数拼接起来（合并）。
 * 
 * 例如：cin.get(name1,ArSize).get(); 
 * 
 * 效果与getline()相同。cin.get(name1,ArSize).get(name2,ArSize)。
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

const int ArSize = 20;

int main()
{
    char name[ArSize];
    char dessert[ArSize];

    cout<<"请输入你的名字：\n";
    cin.get(name,ArSize).get();

    cout<<"请输入你最喜欢的甜食：\n";
    cin.get(dessert,ArSize).get();

    cout<<"我有一些 "<<dessert<<" 给你， "<<name<<"。\n";

    return 0;
}




