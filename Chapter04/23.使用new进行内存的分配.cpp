/********************************************************************
 * 
 * Date : 2020 - 02 - 28
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  使用new进行内存的分配
 * 
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int main()
{
    int nights = 1001;
    int * pt = new int; // 使用new为int类型的对象分配内存
    *pt = 1001;

    cout<<"nights Value = ";
    cout<<nights<<" : location "<<&nights<<endl;

    cout<<"int ";
    cout<<" Value = "<<*pt<<": location = "<<pt<<endl;

    double * pd = new double; // 使用new为double类型的对象分配内存
    *pd = 10000001.0;
    // 地址本身只指出对象存储地址的开始，而没有指出其类型（使用的字节数）。

    cout<<"double";
    cout<<" Value = "<<*pd<<": location = "<<pd<<endl;
    cout<<"location of pointer pd : "<<&pd<<endl;
    cout<<"size of pt = "<<sizeof(pt)<<endl;
    cout<<":size of *pt = "<<sizeof(*pt)<<endl;
    cout<<"size of pd = "<<sizeof pd<<endl;
    cout<<"size of *pd = "<<sizeof(*pd)<<endl;

    return 0;
}

