/********************************************************************
 * 
 * Date : 2020 - 02 - 26
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description : 除法问题的注意点 
 * 
 * 除法运算符（/）的行为取决于操作数的类型。
 * 
 * 如果两个操作数都是整数，则C++将执行整数除法。把结果的小数部分丢弃，使最后的一个结果是一个整数。
 * 
 * 如果其中有一个（或两个）操作数是浮点数，则小数部分将保留，结果为浮点数。 
 * 
 ********************************************************************/



#include<iostream>

using namespace std;

int main()
{
    // 如果编译器不接受self()中的ios_base,请使用ios。
    
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout<<"整数消除： 10 / 5 = "<<10/5<<endl;
    cout<<"浮点数消除：10.0 / 5.0 = "<<10.0/5.0<<endl;
    cout<<"浮点数消除：10.0 / 5 = "<<10.0/5<<endl;
    cout<<"double常量：1.e7 / 9.0 = "<<1.e7 / 9.0<<endl;
    cout<<"浮点常量：1e7f / 9.0f = "<<1.e7f / 9.0f<<endl;

    return 0;

}

