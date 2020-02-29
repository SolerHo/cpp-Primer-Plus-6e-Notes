/********************************************************************
 * 
 * Date : 2020 - 02 - 29
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  使用new创建动态结构
 * 
 * 对于在指定结构成员时，句点运算符和箭头运算符的选择时：
 * 
 * 如果结构标识符是结构名，则使用句点运算符（.）
 * 如果标识符是指向结构的指针，则使用箭头运算符（->）。
 ********************************************************************/

#include<iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};
using namespace std;

int main()
{
    // 把new用于结构的两个步骤：创建结构和访问其成员。要创建结构，需要同时使用结构类型和new。
    inflatable * ps = new inflatable; // 将存储inflatable结构的一块可用内存的地址赋值给ps
    cout<<"Enter name of inflatable item:";
    cin.get(ps->name,20);
    cout<<"Enter volume in cubic feet:";
    cin>>ps->price; // 箭头成员运算符，可用于指向结构的指针，就像点运算可用于结构名一样。

    cout<<"Name : "<<(*ps).name<<endl;
    cout<<"volume : "<<ps->volume<<" cubic feet\n";
    cout<<"Price : $"<<ps->price<<endl;
    delete ps;
    return 0;
}




