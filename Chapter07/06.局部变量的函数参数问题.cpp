/********************************************************************
 * 
 * Date : 2020 - 03 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SEVEN
 * 
 * description : 局部变量的函数参数问题
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

double probability(unsigned numbers,unsigned picks);

int main()
{
    double total,choices;
    cout<<"请输入你抽取卡片的总数和能够抽取的次数：";
    while((cin>>total>>choices)&&choices<=total)
    {
        cout<<"你可以获奖的概率为："<<probability(total,choices)<<endl;
        cout<<"接着输入下一组的两个数（输入q即可停止）:\n";
    }
    cout<<"结束了！Bye-Bye！"<<endl;
    return 0;
}

double probability(unsigned numbers,unsigned picks)
{
    double result = 1.0; // 局部变量
    double n;
    unsigned p;

    for(n = numbers,p = picks;p>0;n--,p--)
    /*分子分母的阶乘*/
        result = result * n/p;
    
    return result;
}