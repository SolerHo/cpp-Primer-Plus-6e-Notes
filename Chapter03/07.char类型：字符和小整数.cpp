/********************************************************************
 * 
 * Date : 2020 - 02 - 26
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  char类型：字符和小整数
 * 
 * char类型：专门存储字符（如字母和数字），也是另外一种整型。
 * 
 * ASCII字符集中的字符用数值编码（ASCII码）进行表示。如字符A的编码为65。
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int main(void)
{
    char ch;
    int i;

    cout<<"请输入一个字符："<<endl;
    cin>>ch;
    i = ch;
    cout<<"Hola!";
    cout<<"感谢你的"<<ch<< " character."<<"对应的ASCII码是："<<i<<endl;

    return 0;
}

