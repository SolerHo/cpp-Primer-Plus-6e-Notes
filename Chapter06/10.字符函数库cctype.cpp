/********************************************************************
 * 
 * Date : 2020 - 03 - 06
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  字符函数库cctype
 * 
 * 
 * 找出一个文本文件中，统计字母，空格，数字，标点符号的个数
 * 
 ********************************************************************/
#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    cout<<"请在屏幕上输入一些文本用于分析和打印.\n";

    char ch;
    int whitespace = 0;
    int digit = 0; 
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch); /*获取第一个字符*/
    while(ch!='@')
    {
        if(isalpha(ch)) // 是否是字母
            chars++;
        else if(isspace(ch)) // 是否是空格
            whitespace++;
        else if(isdigit(ch)) // 是否是数字
            digit++;
        else if(ispunct(ch)) // 是否是标点符号
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout<<"一共有 "<<chars<<" 个字母"
        <<" ; 有 "<<whitespace<<" 个空格"
        <<" ; 有 "<<digit<<" 个数字"
        <<" ; 有 "<<punct<<" 个标点符号"
        <<" ; 有 "<<others<<" 个其他的"<<endl;
    
    return 0;
}
