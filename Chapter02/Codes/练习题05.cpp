/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 
 * 
 * description :  
 * 
 * 写一个程序，其中的main()调用一个用户自定义的函数（以摄氏温度作为参数，并返回相应的华氏温度值），按照下面的格式进行输入输出。
 * 
 * 请输入你要转换的摄氏温度：23
 * 23 摄氏度 =   华氏温度
 * 
 * 转换公式：
 * 
 * 华氏温度 = 1.8 * 摄氏温度 + 32.0
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

double func(double celsius)
{
    double Fahrenheit = 1.8 * celsius + 32.0;
    return Fahrenheit;
}

int main(void)
{
    double celsius,Fahrenheit;
    cout<<"请输入要转换的摄氏温度："<<endl;
    cin>>celsius;
    Fahrenheit = func(celsius);
    cout<<celsius<<" 摄氏度"<<" = "<<Fahrenheit<<"华氏温度"<<endl;

}