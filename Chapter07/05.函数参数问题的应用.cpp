/********************************************************************
 * 
 * Date : 2020 - 03 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SEVEN
 * 
 * description : 函数参数问题的应用
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

void n_chars(char ,int);

int main()
{
    int times;
    char ch;

    cout<<"请输入一个字符：";
    cin>>ch; //读取字符
    while (ch!='q') // 是 q 即刻停止
    {
        cout<<"请输入一个整数：";
        cin>>times;
        n_chars(ch,times); // 调用函数，使用两个参数传递给该函数
        cout<<"\n请输入其他的字符或者是输入q结束：";
        cin>>ch;
    }
    cout<<"次数值是："<<times<<" .\n";
    cout<<"结束了！Bye Bye！\n";

    return 0;
}

void n_chars(char c,int n)
{
    while(n-->0) // 思考使用 --n 的情况
        cout<<c;
}