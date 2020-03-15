/********************************************************************
 * 
 * Date : 2020 - 03 - 06
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  逻辑非（NOT）运算符：!
 * 
 * 
 ********************************************************************/
#include<iostream>
#include<climits>

using namespace std;

bool is_int(double);

int main()
{
    double num;

    cout<<"Yoo!请输入一个整数：";
    cin>>num;

    while(!is_int(num)) // 不能超出int类型的取值范围
    {
        cout<<"超出范围了！-- 请重试：";
        cin>>num;
    }
    int val = int(num); // 类型转换
    cout<<"你已经输入一个整数："<<val<<"\nbye";

    return 0;
}

bool is_int(double x)
{
    if(x<= INT_MAX && x>=INT_MIN) // 使用climits值
        return true;
    else
        return false;
}
