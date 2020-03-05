/********************************************************************
 * 
 * Date : 2020 - 03 - 05
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  使用cin.get(char)逐行读取
 * 
 * 逐个字符读取输入的程序需要检查每个字符，包括空格、制表符和换行符。
 * 
 * 成员函数cin.get()读取输入即可实现。
 * 
 ********************************************************************/
#include<iostream>

using namespace std; 

int main()
{
    char ch;
    int count = 0; // 计算数量变量

    cout<<"请输入一串字符(输入#即可停止)：\n";
    cin.get(ch); // 使用cin.get(ch)函数
    while (ch!='#')
    {
        cout<<ch;
        ++count;
        cin.get(ch);
    }
    cout<<endl<<count<<" character read\n";
    
    return 0;
}