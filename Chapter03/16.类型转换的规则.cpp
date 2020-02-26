/********************************************************************
 * 
 * Date : 2020 - 02 - 26
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  类型转换的规则
 * 
 * 1.将一种算术类型的值赋给另一种算术类型的变量时，C++对值进行转换
 * 2.表达式中包含不同的类型时，C++对值进行转换
 * 3.将参数传递给函数时，C++对值进行转换
 * 
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);
    int debt = 7.2812;
    cout<<"tree = "<<tree<<endl;
    cout<<"guess = "<<guess<<endl;
    cout<<"debt = "<<debt<<endl;
    
    return 0;
}
