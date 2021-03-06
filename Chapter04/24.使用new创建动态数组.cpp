/********************************************************************
 * 
 * Date : 2020 - 02 - 28
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  使用new创建动态数组
 * 
 * 
 * 
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int main()
{

    double * p3 = new double [3];
    p3[0] = 0.1;
    p3[1] = 0.2;
    p3[2] = 0.3;

    /**代码解释
     * 
     * p3 = p3 + 1;
     * 
     * 表达式p3[0]指向了数组的第二个值。将p3加1导致数组指向了第2个元素而不是第1个。
     * 
     * p3 = p3 - 1; // 指针将指向原来的值，使得程序可以给delete[]提供正确的地址。
     * 
     */

    cout<<"p3[1] is "<<p3[1]<<".\n";
    p3 = p3 + 1; // 对于指针可以，但是对于数组是错误的

    // 所以结果上没有修改数组名的值。但指针是变量，所以可以修改。
    cout<<"Now p3[0] is "<<p3[0]<<" and ";
    cout<<"p3[1] is "<<p3[1]<<".\n";
    p3 = p3 - 1; // 返回到最开始的数组变量
    delete [] p3; // 释放内存

    return 0;
}


