/********************************************************************
 * 
 * Date : 2020 - 03 - 18
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description : showpoint操作符的用法
 * 
 ********************************************************************/

#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    double n = 7.0;
    // 默认情况下，浮点数不会显示尾数 0，并且如果没有小数部分的浮点数则不显示小数点。
    cout<<"原始的值："<<n<<endl;
    // 操作符 showpoint，它允许这些默认值被覆盖。
    // 当使用 showpoint 时，表示打印浮点数的小数点和小数位数，即使显示的数值没有小数点。
    // 如果没有指定所需的小数点位数，则默认显示 6 个有效数。
    cout<<"使用showpoint后的值："<<showpoint<<n<<endl;
    // setprecision(num) 显示 num 位的有效数，例如：setprecision(2)则显示两个有效数（包括整数位和小数位）
    cout<<"使用setprecision后的值："<<setprecision(2)<<n<<endl;
    // fixed 和 setprecision 操作符两者都被设置，指定要打印两位小数
    cout<<"使用fixed后的值："<<fixed<<n<<endl;

    return 0;
}