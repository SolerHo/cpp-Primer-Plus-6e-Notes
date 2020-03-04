/********************************************************************
 * 
 * Date : 2020 - 03 - 04
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  使用while遍历字符串并显示ASCII码值
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

const int ArSize = 20;

int main()
{
    char name[ArSize];

    cout<<"请输入你的名字：";
    cin>>name;
    cout<<"这是你的名字，显示字符和对应的ASCII码是：\n";

    int i = 0;
    while(name[i] != '\0')
    {
        cout<<name[i]<<":"<<int(name[i])<<endl;
        i++;
    }
    return 0;
}