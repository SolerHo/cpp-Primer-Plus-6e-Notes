/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  字符串的使用
 * 
 * string类位于名称空间std中，所以需要提供using指令或者是直接使用std::string进行引用。
 * 
 * 要使用string类，必须在程序中包含头文件string中。
 * 
 * string类定义隐藏了字符串的数组性质。
 * 
 * 
 ********************************************************************/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    // 创建数组
    char char01[20];
    char char02[20] = "Soler HO";

    // 创建字符串
    string str01;
    string str02 = "Jhin";
    cout<<"请输入一个feline：";
    cin>>char01;
    cout<<"请输入另一个feline：";
    cin>>str01;

    cout<<"这里有一些felines：\n";
    cout<<char01<<" "<<char02<<" "
        <<str01<<" "<<str02<<endl;
    
    cout<<"The third letter in "<<char02<< " is "<<char02[2]<<endl;
    cout<<"The third letter in "<<str02<< " is "<<str02[2]<<endl;

    return 0;

}

/*
使用string对象的方式和使用字符数组相同。

使用C-风格字符串来初始化string对象中。
使用cin来将键盘输入存储到string对象中。
使用cout来显示string对象。
可以使用数组表示方法来访问存储在string1对象中的字符。

*/