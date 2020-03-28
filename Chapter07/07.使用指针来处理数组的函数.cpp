/********************************************************************
 * 
 * Date : 2020 - 03 - 28
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SEVEN
 * 
 * description : 使用指针来处理数组的函数
 * 
 * 注意点：将指针（包括数组名）加 1，是加上一个与指针指向的类型的长度（以字节为单位）相等的值。
 * 
 * 对于遍历数组而言，使用指针加法和数组下标时等效。
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

const int ArSize = 8;

/*方括号指出arr是一个数组，而方括号为空，则表明可以即哪个任何长度的数组传递给该函数。*/
int sum_arr(int arr[],int n); 

int main()
{
    /**
     * 1.数组声明使用数组名来标记存储位置。
     * 2.对数组名使用sizeof可得到整个数组的长度（以字节为单位）
     * 3.将地址运算符&用于数组名时，将返回整个数组的地址。
     */
     
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    /*一些系统要求在int之前使用static能够数组初始化*/
    int sum = sum_arr(cookies,ArSize); // cookies是数组名，在C++中是第一个元素的地址。
    cout<<"一共吃了 "<<sum<<" 块甜饼"<<"\n";
    return 0;
}

// 计算整个数组元素的总和
int sum_arr(int arr[],int n)
{
    int total = 0;
    for(int i = 0;i<n;i++)
        total = total + arr[i];

    return total;
}
