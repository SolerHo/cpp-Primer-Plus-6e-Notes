/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  整型变量的应用
 * 
 * 
 ********************************************************************/
#include<iostream>
#include<climits> // 定义了符号常量来表示类型的限制

using namespace std;

int main()
{
    // 变量的初始化
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LONG_MAX;

    /**使用sizeof运算符
     * 
     * 可对类型名（如int）或者是变量名（如n_short）使用，对变量名使用时，括号可有可无。
     * 
     */
    cout<<"int 是 "<<sizeof(int)<<" bytes "<<endl;
    cout<<"short 是 "<<sizeof n_short<<" bytes "<<endl;
    cout<<"long 是 "<<sizeof n_long<<" bytes "<<endl;
    cout<<"long long 是 "<<sizeof n_llong<<" bytes "<<endl;

    // 最大值
    cout<<"MAXIMUM Values:"<<endl;
    cout<<"int : "<<n_int<<endl;
    cout<<"short : "<<n_short<<endl;
    cout<<"long : "<<n_long<<endl;
    cout<<"long long : "<<n_llong<<endl;

    // 最小值
    cout<<"MINIMUM int value = "<<INT_MIN<<endl;
    cout<<"Bits per byte = "<<CHAR_BIT<<endl;

    return 0;
}


