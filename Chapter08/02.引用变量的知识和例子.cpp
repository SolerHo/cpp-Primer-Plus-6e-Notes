/********************************************************************
 * 
 * Date : 2020 - 04 - 03
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 08 
 * 
 * description : 引用变量的知识和例子
 * 
 * 引用变量 --- C++的复合类型
 * 
 * 引用就是已定义的变量的别名（另一个名字）。
 * 
 * 引用变量的用途：用作函数的形参。
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    int rats = 101;
    /*rodents是rats的别名，&不是地址运算符。而是将rodents的类型声明为int &,即指向int变量的引用。*/
    int & rodents = rats; // 必须声明引用变量时进行初始化

    cout<<"rats = "<<rats;
    cout<<" , rodents = "<<rodents<<endl;

    cout<<"\nrats address = "<<&rats;
    cout<<" , rodents address = "<<&rodents<<endl;

    int bunnies = 50;
    rodents = bunnies; // 是否能够改变这个引用？

    cout<<"\nbunnies = "<<bunnies;
    cout<<" , rats = "<<rats; // 改变成功，而且rats也随之发生改变。
    cout<<" , rodents = "<<rodents<<endl;

    cout<<"\nbunnies address = "<<&bunnies;
    cout<<" , rodents address = "<<&rodents<<endl;

    return 0;

}