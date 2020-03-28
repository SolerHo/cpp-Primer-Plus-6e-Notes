/********************************************************************
 * 
 * Date : 2020 - 03 - 28
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SEVEN
 * 
 * description : 使用数组区间的函数
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

const int ArSize = 8;

int sum_arr(const int *begin,const int *end);

int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    int sum = sum_arr(cookies,cookies+ArSize);
    cout<<"总共吃了 "<<sum<<" 个甜饼。\n";
    sum = sum_arr(cookies,cookies+3); // 前三个元素
    cout<<"前三餐吃了 "<<sum<<" 个甜饼。\n";
    sum = sum_arr(cookies+4,cookies+8); // 后四个元素
    cout<<"后四餐吃了 "<<sum<<" 个甜饼。\n";

    return 0;
}

int sum_arr(const int * begin,const int *end)
{
    const int *pt;
    int total = 0;

    for(pt = begin;pt!=end;pt++)
        total = total + *pt;
    return total;
}