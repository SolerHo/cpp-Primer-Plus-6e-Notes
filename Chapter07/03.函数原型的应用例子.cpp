/********************************************************************
 * 
 * Date : 2020 - 03 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SEVEN
 * 
 * description : 函数原型的应用例子
 * 
 ********************************************************************/

#include<iostream>

void cheers(int); // 没有返回值的原型
double cube(double x); // 返回 double类型的值

using namespace std;

int main()
{
    cheers(5); // 调用函数
    cout<<"请给我一个数字：";
    double side;
    cin>>side;
    double volume = cube(side);
    cout<<"A "<<side<<" -foot 正方体的体积是："<<volume<<" cubic feet.\n";
    cheers(cube(2));
    return 0;
}

void cheers(int n)
{
    for(int i = 0;i<n;i++)
        cout<<"Cheers!";
    cout<<endl;
}
double cube(double x)
{
    return x*x*x;
}