/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * description :  C++的语句
 * 
 * 
 * 
 * 
 ********************************************************************/

#include<iostream>
using namespace std;

int main()
{
    /**对变量进行声明和进行赋值
     * 
     * 指出信息存储的位置和所需要的内存空间。
     * 
     */
    int carrots; // 声明一个整型变量

    carrots = 25; // 给变量赋值
    cout<<"我有 "<<carrots<<" 个carrots."<<endl;

    carrots = carrots - 1; // 对变量进行修改
    cout<<"快看！快看！现在，我有 "<<carrots<<" 个carrots!"<<endl;

    return 0;   
}