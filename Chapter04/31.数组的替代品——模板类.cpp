/********************************************************************
 * 
 * Date : 2020 - 03 - 01
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  数组的替代品——模板类(vector)、(array[C++11规范])
 * 
 * 
 * 无论是数组、vector对象还是array对象，都可使用标准数组表示法来访问各个元素。
 * 
 * 从地址可知，array对象和数组存储在相同的内存区域（即栈）中，vector对象存储在自由存储区域或堆中。
 * 
 * 可以将一个array对象赋给另一个array对象，对于数组，必须逐个元素复制数据。
 * 
 ********************************************************************/
#include<iostream>
#include<vector>
#include<array>

using namespace std;

int main(void)
{
    double a1[4] = {1.2,2.4,3.6,4.8}; // C 和原始的C++

    vector<double> a2(4); // C++98标准的 STL ; 创建4个元素的模板类vector

    // C++ 98标准中，没有简单的方式去初始化
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;

    // C++11 -- 创建和初始化数组对象
    array<double,4> a3 ={3.14,2.72,1.62,1.41};
    array<double,4> a4;
    a4 = a3; // 对于同样大小的数组对象是有效使用的

    // 使用数组符号
    cout<<" a1[2]:"<<a1[2]<<" at "<<&a1[2]<<endl;
    cout<<" a2[2]:"<<a2[2]<<" at "<<&a2[2]<<endl;
    cout<<" a3[2]:"<<a3[2]<<" at "<<&a3[2]<<endl;
    cout<<" a4[2]:"<<a4[2]<<" at "<<&a4[2]<<endl;

    // 代码不安全部分，C和C++中出现了数组越界，但是编译器不会检查数据的越界问题
    a1[-2] = 20.2; // 找到a1指向的地方，向前移两个double元素，并把20.2存储到目的地
    cout<<" a1[-2]:"<<a1[-2]<<" at "<<&a1[-2]<<endl;
    cout<<" a3[2]:"<<a3[2]<<" at "<<&a3[2]<<endl;
    cout<<" a4[2]:"<<a4[2]<<" at "<<&a4[2]<<endl;

    return 0;

}

