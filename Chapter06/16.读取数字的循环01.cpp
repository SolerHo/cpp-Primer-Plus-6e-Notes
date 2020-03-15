/********************************************************************
 * 
 * Date : 2020 - 03 - 07
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  读取数字的循环01
 * 
 * 
 * 读取每一条鱼的重量，然后计算平均重量
 * 
 * 步骤：
 * 1.n的值保持不变
 * 2.不匹配的输入将被留在输入队列中
 * 3.cin对象中的一个错误标记被设置。
 * 4.对cin方法的调用将返回false（如果被转换为bool类型）
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

const int MAX = 5;

int main()
{
    double fish[MAX];
    cout<<"请在控制器屏幕上输入鱼的重量：\n";
    cout<<"fish #1:";

    int i = 0;

    while(i<MAX&&cin>>fish[i]) 
    {
        if(++i<MAX) // ++i和i++的应用问题，++i是先执行运算，再赋值
            cout<<"fish #"<<i+1<<":"; // 由于数组的索引是从0开始，所以需要加1
    }
    // 计算平均数
    double total = 0.0;
    for(int j = 0; j<i;j++)
        total += fish[j]; // 计算所有的鱼重量加起来
    
    // 打印输出结果，考虑到是否有鱼的问题
    if(i == 0)
        cout<<"No fish!\n";
    else
        cout<<"这 "<<i<<" 条鱼的平均重量是 "<<total/i<<endl;
    
    cout<<"结束了！\n";

    return 0;
}
