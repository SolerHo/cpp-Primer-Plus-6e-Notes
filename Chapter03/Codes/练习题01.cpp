/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  
 * 
 * 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。
 * 该程序使用下划线字符来指示输入位置，使用一个const符号常量来表示转换因子。
 * 
 * 英寸和英尺的转换关系：
 * 
 * 1英尺 = 12 英寸
 ********************************************************************/

#include<iostream>

using namespace std;

// 英尺和英寸的换算因子声明
const double Inch_Per_Feet = 12; // 1 英尺 = 12 英寸

int main()
{
    double height_inch;
    cout<<"请输入你的身高："; 

    cin>>height_inch; // 读取输入英寸身高
    cout<<"你的身高是："<<height_inch<<" 英寸"<<endl;
    
    double height_feet = height_inch / Inch_Per_Feet; // 转换后的英尺身高

    cout<<"你的身高是："<<height_feet<<" 英尺"<<endl;

    return 0;

}