/********************************************************************
 * 
 * Date : 2020 - 03 - 15
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description : 读取数字的循环问题02
 * 
 * 对于用户输入的不是数字时，程序不再读取输入
 * 
 * 对于程序发现用户输入的是错误的问题时，应该采取的步骤：
 * 1.重置cin以接受新的输入
 * 2.删除错误的输入
 * 3.提示用户再输入
 * 
 ********************************************************************/
// 提示用户提供5个高尔夫得分，以计算平均成绩。

#include<iostream>

using namespace std;

const int Max = 5;

int main()
{
    int golf[Max];
    cout<<"请输入你的高尔夫得分：\n";
    cout<<"你必须输入 "<<Max<<" 回合的得分!"<<endl;
    int i;

    for(i = 0;i<Max;i++)
    {
        cout<<"回合# "<<i+1<<":";
        while(!(cin>>golf[i])) // false就结束内部循环
        {
            cin.clear(); // 重置输入
            while(cin.get()!='\n')
                continue; // 排除错误输入
            cout<<"请输入一个数字:";
        }
    }
    // 计算平均数
    double total = 0.0;
    for(i = 0;i<Max;i++)
        total += golf[i];
    // 输出结果
    cout<<Max<<" 回合的平均分是： "<<total/Max<<endl;

    return 0;
}