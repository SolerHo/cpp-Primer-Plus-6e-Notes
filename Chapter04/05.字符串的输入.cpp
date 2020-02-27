/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  字符串的输入
 * 
 * 程序的结构不够严谨，直接读取，然后直接输出，并没有逐行进行读取输入。
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
    cin>>name;

    cout<<"请输入你最喜欢的甜食：\n";
    cin>>dessert;

    cout<<"我有一些美味的 "<<dessert<<" 给你， "<<name<<".\n";
    return 0;
}