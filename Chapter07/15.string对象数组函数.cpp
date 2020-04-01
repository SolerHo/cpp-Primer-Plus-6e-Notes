/********************************************************************
 * 
 * Date : 2020 - 04 - 01
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 07
 * 
 * description : string对象数组函数
 * 
 ********************************************************************/
#include<iostream>
#include<string>

using namespace std;

const int SIZE = 5;

void display(const string sa[],int n);

int main()
{
    string list[SIZE]; // string数组，数组中的每个元素都是string对象
    cout<<"请输入你最喜欢的 "<<SIZE<< " 种水果！"<<endl;
    for(int i = 0;i<SIZE;i++)
    {
        cout<<i+1<<":";
        getline(cin,list[i]);
    }
    cout<<"你的水果清单是：\n";
    display(list,SIZE);

    return 0;
}
void display(const string sa[],int n) // sa是一个指向string对象的指针
{
    for(int i = 0;i<n;i++)
            cout<<i+1<<":"<<sa[i]<<endl;
}