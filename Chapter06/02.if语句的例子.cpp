/********************************************************************
 * 
 * Date : 2020 - 03 - 06
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  if语句的例子
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    char ch;
    int spaces = 0;
    int total = 0; // 统计字符数
    cin.get(ch);

    while(ch!='.') // 语句终止符号
    {
        if(ch == ' ') // 检查ch是否是空格
            ++spaces;
        ++total;
        cin.get(ch);
    }   
    cout<<"一共是 "<<spaces<<" 个空格,"<<"一共是 "<<total<<" 个字符！\n";
    return 0;
}
