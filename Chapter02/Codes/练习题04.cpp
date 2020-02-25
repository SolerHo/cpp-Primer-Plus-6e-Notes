/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 
 * 
 * description :  
 * 
 * 写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月。
 * 
 ********************************************************************/


#include<iostream>

using namespace std;

int main(void)
{
    int age;
    cout<<"请输入你的年龄："<<endl;
    cin>>age;
    int months = age*12;
    int days = age*365;

    cout<<"你年龄里面包含了 "<<months<<" 个月"<<endl;
    cout<<"你已经活了大概 "<<days<<" 天"<<endl;

    return 0;
}




