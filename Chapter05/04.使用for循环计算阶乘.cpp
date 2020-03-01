/********************************************************************
 * 
 * Date : 2020 - 03 - 01
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  使用for循环计算阶乘
 * 
 ********************************************************************/


#include<iostream>
using namespace std;

int main()
{
    int Arsize;
    printf("请输入你的阶数：ArSize = ");
    scanf("%d",&Arsize);

    long long facts[Arsize];// 数组的长度由用户决定输入
    facts[1] = facts[0] = 1LL;
    for(int i = 2;i <= Arsize;i++)
        facts[i] = i * facts[i-1];
    for(int i = 0;i<=Arsize;i++)
        cout<<i<<"!= "<<facts[i]<<endl;
    return 0;
}
/*long long 类型，有的系统会不支持，所以可以double*/

