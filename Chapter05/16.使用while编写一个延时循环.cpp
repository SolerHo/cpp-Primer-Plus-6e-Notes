/********************************************************************
 * 
 * Date : 2020 - 03 - 04
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  使用while编写一个延时循环
 * 
 * 
 ********************************************************************/
#include<iostream>
#include<ctime> // 描述时间函数

using namespace std;

int main()
{
    cout<<"请输入你的时间延时（以系统时间单位为单位）：";
    float seconds;
    cin>>seconds;
    clock_t delay = seconds * CLOCKS_PER_SEC;
    cout<<"开始\a\n";
    clock_t start = clock();
    while(clock() - start < delay)
        ;
    cout<<"结束了！\a\n";

    return 0;
}