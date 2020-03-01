/********************************************************************
 * 
 * Date : 2020 - 03 - 01
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  for循环的例子
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int main()
{
    int i,j,limit;

    // 提示输入信息
    printf("请输入限制的数 limit = ");
    scanf("%d",&limit);

    // 循环初始化开始部分（loop initialization）
    for(i = 1;i<=limit;i++) // i++使用了递增运算符（increment operator）
        cout<<"这是第 "<< i <<" 个数字"<<endl;
    cout<<" 数字已经结束了～～～"<<endl;

    for(j = limit;j>=0;j--) // i--使用了递减运算符（）
        cout<<"你是倒数第 "<<j+1<<" 个人"<<endl;
    cout<<"你的倒数已经结束了～～～"<<endl;
    return 0;
}
