/********************************************************************
 * 
 * Date : 2020 - 04 - 02
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 07
 * 
 * description : 函数与array对象
 * 
 ********************************************************************/
#include<iostream>
#include<array>
#include<string>

const int Seasons = 4;
const std::array<std::string,Seasons> Snames = {
    "spring","Summer","Fall","Winter"
};
// 修改数组对象的函数
void fill(std::array<double,Seasons> *pa); // 使用array对象存储一年四个季度的开支

// 使用没有修改数组对象的函数
void show(std::array<double,Seasons> da);

int main()
{
    std::array<double,Seasons> expenses;
    fill(&expenses); // 按地址传递
    show(expenses); // 按值传递

    return 0;
}

void fill(std::array<double,Seasons> *pa) // pa是指向数组对象的指针
{
    using namespace std;
    for(int i = 0;i<Seasons;i++)
    {
        cout<<"请输入 "<<Snames[i]<< " 季度的开支：";
        cin>>(*pa)[i]; // 括号是为了解决运算符的优先级问题
    }
}

void show(std::array<double,Seasons> da)
{
    using namespace std;
    double total = 0.0;
    cout<<"\nEXPENSES\n";
    for(int i = 0;i<Seasons;i++)
    {
        cout<<Snames[i]<<": $"<<da[i]<<endl;
        total +=da[i]; 
    }
    cout<<"总的开支是： $"<<total<<endl;
}


