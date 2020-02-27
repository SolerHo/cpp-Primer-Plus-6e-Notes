/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  string 类的I/O
 * 
 * 使用cin和运算符>> 来输入存储到string对象中，使用cout和运算符<< 来显示string对象，其句法与处理C-风格字符串相同。
 * 
 * 每次读取一行而不是一个单词时，使用的句法不同。
 * 
 ********************************************************************/
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    char char01[20]; // 未初始化的数组的内容是未定义的
    string str;

    cout<<"Length of string in char01 before input:"<<strlen(char01)<<endl;

    cout<<"length of string in str before input:"<<str.size()<<endl;

    cout<<"Enter a line of text:\n";
    /*第一个参数是目标数组，第二个参数数组长度，getline()使用它是因为可以避免超越数组的边界。*/
    cin.getline(char01,20);  // 函数getline()是istream类的一个类方法，cin是一个istream对象。
    cout<<"Enter another line of text:\n";
    getline(cin,str);

    cout<<"You endered:"<<str<<endl;
    cout<<"输入char01后的长度："<<strlen(char01)<<endl; // 函数strlen()从数组的第一个元素开始计算字节数，直到遇到空字符。

    cout<<"输入str后的长度为："<<str.size()<<endl;

    return 0;
}