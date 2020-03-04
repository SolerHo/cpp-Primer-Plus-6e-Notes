/********************************************************************
 * 
 * Date : 2020 - 03 - 04
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  逗号运算符
 * 
 * 逗号可以使得两个表达式语句合并
 * 
 * 例如：j++,i++;
 * 
 * 逗号不总是逗号运算符，逗号有时也用作变量的分隔。
 * int i,j;
 * 
 ********************************************************************/

// 将一个单词进行的字符顺序反转

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    cout<<"请输入一个单词：";
    string word;

    cin>>word;

    char temp;
    int i,j;
    for(j = 0,i = word.size()-1; j < i;--i,++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout<<word<<"\n结束了！\n";

    return 0;    
}