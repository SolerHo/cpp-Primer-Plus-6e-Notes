/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * description :  
 * 
 * 编写一个程序，其main()调用一个用户自定义的函数（以光年值为参数，并返回对应天文单位的值）
 * 根据用户输入光年值，并显示结果。
 * 
 * 请使用double类型，1光年 = 63240 天文单位
 * 
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int func(double lightYears)
{
    double AU = lightYears * 63240;
    return AU; // 天文单位的缩写
}

int main(void)
{
    double lightYears_value; // 光年
    cout<<"请输入你的值："<<endl;
    cin>>lightYears_value;

    double AU = func(lightYears_value); // 调用func函数
    cout<<lightYears_value<<" 光年"<<" = "<<AU<<" 天文单位"<<endl;
}