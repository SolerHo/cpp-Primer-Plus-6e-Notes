/********************************************************************
 * 
 * Date : 2020 - 03 - 31
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 07
 * 
 * description : 返回C-风格字符串的函数
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

char * buildstr(char c,int n);  // 函数原型

int main()
{
    int times;
    char ch;

    cout<<"请输入一个字符：";
    cin>>ch;
    cout<<"请输入次数：";
    cin>>times;

    char *ps = buildstr(ch,times);
    cout<<ps<<endl;
    ps = buildstr('+',20);
    cout<<ps<<" - 结束了 - "<<ps<<endl;

    delete [] ps;
    return 0;
}

char * buildstr(char c,int n)
{
    /*创建n个字符的字符串，需要能够存储n+1个字符。目的：为了存储空值字符*/
    char * pstr = new char[n+1]; 
    pstr[n] = '\0';
    while(n-->0)
        pstr[n] = c;
    return pstr;
}