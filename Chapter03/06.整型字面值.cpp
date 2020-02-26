/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  整型字面值
 * 
 * 整型字面值（常量）：显式书写的常量。如777或者是222。
 * 
 * C / C++中的三种计数方法：十进制、八进制和十六进制
 * 
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int main()
{
    int chest = 42;
    int waist = 0x42; // 以数字0和字母x开头
    int inseam = 042; // 以数字0开头

    cout<<"+++++++++++"<<endl;

    cout<<"chest = "<<chest<<" (42 in decimal)\n"; // 十进制
    cout<<"waist = "<<waist<<" (0x42 in hex)\n"; // 十六进制
    cout<<"inseam = "<<inseam<<" (042 in octal)\n"; // 八进制

    return 0;
}