/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * description :  
 * 
 * 写一个C++程序，要求用户输入一个以long为单位的距离，然后转换为码（一long = 220码）。
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int main(void)
{
    int length;
    cout<<"请输入以long为单位的距离："<<endl;
    cin >> length;

    int stack = 220 * length; // 转换为码

    cout<<"转换为码后的值为："<<stack<<endl;

    return 0;

}
