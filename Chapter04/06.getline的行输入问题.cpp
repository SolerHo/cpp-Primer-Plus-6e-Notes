/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  面向行的输入：getline
 * 
 * getline()每次只能读取一行，通过换行符来确定行尾，但不保存换行符。但是在存储字符串时，使用空字符来代替换行符。
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
    cin.getline(name,ArSize);

    cout<<"请输入你最喜欢的甜食：\n";
    cin.getline(dessert,ArSize);

    cout<<"我有一些甜食 "<<dessert<<" 给你，"<<name<<".\n";

    return 0;

}