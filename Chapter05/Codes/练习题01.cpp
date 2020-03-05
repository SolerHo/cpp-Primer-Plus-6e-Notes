/********************************************************************
 * 
 * Date : 2020 - 03 - 05
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  
 * 编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间（包括这两个整数）所有整数的和。
 * 这里假设先输入较小的整数。例如，如果用户输入的是2和9，则程序将指出2~9之间所有整数的和为44。
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main(void)
{
    int min,max;
    cout<<"请输入较小的值：";
    cin>>min;
    cout<<"请输入较大的值：";
    cin>>max;

    int i,sum = 0;
    for(i = min; i <= max;i++)
        sum += i;
    
    cout<<"两个数之间的和是：sum = "<<sum<<endl;

    return 0;
}
