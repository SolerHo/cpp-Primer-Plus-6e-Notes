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
 * 编写一个要求用户输入数字的程序。每次输入后，程序都将报告到目前为止，所有的输入累计和。
 * 当用户输入0时，程序结束。
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    int number; 
    int total = 0;
    cout<<"请输入数字：";
    cin>>number;
    while(number!=0)
    {
        total += number;
        cout<<"total: "<<total<<endl;
        cout<<"请继续输入数字：";
        cin>>number;
    }
    return 0;
}