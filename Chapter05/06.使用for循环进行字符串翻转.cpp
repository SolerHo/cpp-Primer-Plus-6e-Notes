/********************************************************************
 * 
 * Date : 2020 - 03 - 01
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description : 使用for循环访问字符串,进行字符串的翻转
 * 
 * 
 ********************************************************************/
#include<iostream>
#include<string>

int main(void)
{
    using namespace std;
    cout<<"请输入一个单词：";
    string word;
    cin>>word;

    for(int i = word.size() - 1; i >= 0;i--)
        cout<<word[i];
    cout<<"\n 结束了！\n";

    return 0;
}