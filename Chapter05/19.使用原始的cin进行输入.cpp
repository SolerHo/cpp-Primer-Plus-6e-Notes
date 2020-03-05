/********************************************************************
 * 
 * Date : 2020 - 03 - 05
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  使用原始的cin进行文本输入
 * 
 * 
 * 选择某一个特殊字符，作为停止信号。
 * 这些特殊字符又叫做哨兵字符（sentinel character），将其作为停止标记。例如#符号
 * 
 ********************************************************************/

// 读取程序处理的字符数
#include<iostream>

using namespace std;

int main(void)
{
    char ch;
    int count = 0;
    cout<<"输入一串字符（输入#就停止）：\n";
    cin>>ch;

    while(ch!='#')
    {
        cout<<ch;
        ++count;
        cin>>ch;
    }
    cout<<endl<<count<<" character read\n"; // 程序的弊端：读取的内容合在一起
    return 0;
}