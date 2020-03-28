/********************************************************************
 * 
 * Date : 2020 - 03 - 28
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SEVEN
 * 
 * description : 把数组作为参数的函数
 * 
 ********************************************************************/
#include<iostream>

const int ArSize = 8;
int sum_arr(int arr[],int n);

int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    /*十六进制的方式显示地址，sizeof cookies是整个数组的长度*/
    std::cout<<cookies<<" = 数组的地址, "<<sizeof cookies<<" = 数组的大小。\n";
    int sum = sum_arr(cookies,ArSize);
    std::cout<<"一共吃了 "<<sum<<" 个甜饼"<<std::endl;
    sum = sum_arr(cookies,3);
    std::cout<<"前三餐吃了 "<<sum<<" 个甜饼。\n";
    sum = sum_arr(cookies+4,4);
    std::cout<<"后四餐吃了 "<<sum<<" 个甜饼。\n";

    return 0;
}
int sum_arr(int arr[],int n)
{
    int total = 0;
    /*sizeof arr 只是指针变量的长度*/
    std::cout<<arr<<" = arr,"<<sizeof arr<<"sizeof arr\n";
    for(int i = 0;i<n;i++)
        total = total + arr[i];
    return total;
}