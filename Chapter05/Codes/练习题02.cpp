/********************************************************************
 * 
 * Date : 2020 - 03 - 05
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  
 * 
 * 使用array对象（而不是数组）和long double（而不是long long）重新编写程序清单5.4，并计算100！的值。
 * 
 ********************************************************************/
#include<iostream>
#include<array>

using namespace std;

int main(void)
{
    array<long double,100> MyArray;
    MyArray[0] = 1;

    for(int i = 1;i<100;i++)
    {
        MyArray[i] = (i + 1)*MyArray[i-1];
        cout<<i+1<<"! = "<<MyArray[i];
        cout<<endl;
    }
    return 0;

}