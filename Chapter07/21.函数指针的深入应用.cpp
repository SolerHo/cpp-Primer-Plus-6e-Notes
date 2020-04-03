/********************************************************************
 * 
 * Date : 2020 - 04 - 03
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 07 
 * 
 * description : 函数指针的深入应用
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

// 变量符号，同样的标识符
const double * f1(const double ar[],int n); /*函数原型中，参数列表const double ar[] 和 const double *ar 的含义相同*/
const double * f2(const double [],int); /*函数原型中，可以省略标识符*/
const double * f3(const double *,int); 

int main()
{
    double av[3] = {3.14,9.80,6.88};

    /*指针函数*/
    const double *(*p1)(const double *,int) = f1;
    auto p2 = f2; // C++11中自动推断类型
    cout<<"使用指针函数：\n";
    cout<<"Address Value \n";
    cout<<(*p1)(av,3)<<":"<<*(*p1)(av,3)<<endl;
    cout<<p2(av,3)<<":"<<*p2(av,3)<<endl;

    /*pa是一个指针数组，不能使用auto进行初始化列表*/
    const double *(*pa[3])(const double *,int) = {f1,f2,f3};
    /*auot可以进行单个值的初始化*/
    auto pb = pa; /*pb 等于pa的第一个元素*/
    cout<<"使用指针数组的函数：\n";
    cout<<"Address Value \n";
    for(int i = 0;i<3;i++)
        cout<<pa[i](av,3)<<":"<<*pa[i](av,3)<<endl;
    cout<<"\n使用一个指向函数指针:\n";
    cout<<"Address Value \n";
    for(int i = 0;i<3;i++)
        cout<<pb[i](av,3)<<":"<<*pb[i](av,3)<<endl;

    cout<<"\n使用指向函数指针：\n";
    cout<<"Address Value \n";
    for(int i = 0;i<3;i++)
        cout<<pb[i](av,3)<<":"<<*pb[i](av,3)<<endl;
    
    cout<<"\n使用指向指针数组：\n";
    cout<<"Address Value \n";

    // 简单声明pc
    auto pc = &pa;

    cout<<(*pc)[0](av,3)<<":"<<*(*pc)[0](av,3)<<endl;

    const double *(*(*pd)[3])(const double *,int) = &pa;
    const double *pbd = (*pd)[1](av,3);
    cout<<pbd<<":"<<*pbd<<endl;

    cout<<(*(*pd)[2](av,3))<<":"<<*(*(*pd)[2])(av,3)<<endl;

    return 0;

}