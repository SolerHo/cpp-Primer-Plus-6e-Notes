/********************************************************************
 * 
 * Date : 2020 - 02 - 26
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  求模运算符
 * 
 * 求模运算符返回的是整数除法的余数。
 * 
 * 与整数除法结合，适用于解决要求讲一个量分成的整数单元的问题
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    const int Lbs_per_stn = 14;
    int lbs;
    cout<<"请输入你的体重：";
    cin>>lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs%Lbs_per_stn;
    cout<<lbs<<"pounds 是 ： "<<stone<<" stone, "<<pounds<< "pound(s)\n";

    return 0;
}






