/********************************************************************
 * 
 * Date : 2021 - 04 - 03
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 08 
 * 
 * description : 把引用用作函数参数的例子
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

void swapr(int & a,int & b);
void swapp(int *p,int *q);
void swapv(int a,int b);

int main()
{
    int wallet01 = 300;
    int wallet02 = 350;

    /*原始的值*/
    cout<<"wallet01 = $ "<<wallet01;
    cout<<" wallet02 = $ "<<wallet02<<endl;

    /*引用的变量转换*/
    cout<<"使用引用的方式进行变量转换：\n";
    swapr(wallet01,wallet02); // 按引用传递
    cout<<"wallet01 = $ "<<wallet01;
    cout<<" wallet02 = $ "<<wallet02<<endl;

    /*指针转换*/
    cout<<"使用指针的方式进行变量转换：\n";
    swapp(&wallet01,&wallet02); // 按地址传递
    cout<<"wallet01 = $ "<<wallet01;
    cout<<" wallet02 = $ "<<wallet02<<endl;

    /*直接变量值转换*/
    cout<<"通过使用变量的方式：\n";
    swapv(wallet01,wallet02); // 按值传递
    cout<<"wallet01 = $ "<<wallet01;
    cout<<" wallet02 = $ "<<wallet02<<endl;

    return 0;
}
void swapr(int & a,int & b) // 使用引用
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapp(int *p,int *q) // 使用指针
{
    int temp;
    temp = *p;
    *p = *q;
    *p = temp;
}
void swapv(int a,int b) // 使用变量值
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}