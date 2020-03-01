/********************************************************************
 * 
 * Date : 2020 - 03 - 01
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  使用for循环进行步长的修改
 * 
 * 
 ********************************************************************/


#include<iostream>

using namespace std;

int main()
{
    int num = 0;
    cout<<"请输入一个整数："<<endl;
    int by;
    cin>>by;
    cout<<"表达式的步长为："<<by<<" :\n";
    for(int i = 0;i<100;i = i + by)
        cout<<i<<" ";  

    cout<<endl;     
    return 0;
}