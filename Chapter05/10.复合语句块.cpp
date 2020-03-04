/********************************************************************
 * 
 * Date : 2020 - 03 - 04
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  复合语句块
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    cout<<"计算五个数字的和平均数\n";
    cout<<"请输入五个数字：\n";
    double number;
    double sum = 0.0;

    // for循环语句块
    for(int i = 1; i <= 5;i++)
    {
        cout<<"value "<<i<<":";
        cin>>number;
        sum += number;
    }
    cout<<"五个数字之和：sum = "<<sum<<endl;
    cout<<"五个数字的平均数：average = "<<sum/5<<endl;

    return 0;

}