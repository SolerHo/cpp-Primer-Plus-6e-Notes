/********************************************************************
 * 
 * Date : 2020 - 03 - 28
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SEVEN
 * 
 * description : 数组函数的应用实例
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

const int Max = 5;

int fill_array(double ar[],int limit);
void show_array(const double ar[],int n);
void revalue(double r,double ar[],int n);

int main()
{
    double properties[Max];

    int size = fill_array(properties,Max);

    show_array(properties,size);
    if(size>0)
    {
        cout<<"请输入重估系数：";
        double factor;
        while(!(cin>>factor)) // 判断输入是否符合
        {
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout<<"错误输入！请输入一个整数：";
        }
        revalue(factor,properties,size);
        show_array(properties,size);
    }
    cout<<"结束了！Bye-Bye！\n";
    cin.get();
    cin.get();

    return 0;
}

// 填充数组
int fill_array(double ar[],int limit)
{
    double temp;
    int i;
    for(i = 0;i<limit;i++)
    {
        cout<<"请输入 value #"<<i+1<<":";
        cin>>temp;
        if(!cin) // 错误输入
        {
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout<<"错误输入！输入过程终止！\n";
            break;
        }
        else if(temp<0)
            break;
        ar[i] = temp;
    }
    return i;
}

// 显示数组及用const保护数组
void show_array(const double ar[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<"Property #"<<(i+1)<<":$";
        cout<<ar[i]<<endl;
    }
}

// 修改数组
void revalue(double r,double ar[],int n)
{
    for(int i = 0;i<n;i++)
        ar[i] *= r;
}