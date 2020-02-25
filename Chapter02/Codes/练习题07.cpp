/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * description :  
 * 
 * 编写一个程序，要求用户输入小时数和分钟数。在main()函数中，将这两个值传递给一个void函数，后者以下面的格式显示两个值：
 * 请输入你的小时数：
 * 请输入你的分钟数：
 * 你设置的时间为：小时数:分钟数
 * 
 * 
 ********************************************************************/


#include<iostream>

using namespace std;

void time_func(int hour,int munites)
{
    cout<<"你设置的时间是："<<hour<<":"<<munites<<endl;
}

int main(void)
{
    int hours;
    cout<<"请输入你的小时数字：";
    cin>>hours;

    int minutes;
    cout<<"请输入你的分钟数：";
    cin>>minutes;
    time_func(hours, minutes);

    return 0;
}