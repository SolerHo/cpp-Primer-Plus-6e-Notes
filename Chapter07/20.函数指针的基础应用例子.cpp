/********************************************************************
 * 
 * Date : 2020 - 04 - 03
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 07 
 * 
 * description : 函数指针的基础应用例子
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

double betsy(int);
double pam(int);

// 两个参数都是指向double的指针函数
void  estimate(int lines,double (*pf)(int));

int main()
{
    int code;
    cout<<"你需要多少行代码？";
    cin>>code;
    cout<<"这是 betsy 的评估结果：\n";
    estimate(code,betsy);
    cout<<"这是 pam 的评估结果：\n";
    estimate(code,pam);

    return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}
double pam(int lns)
{
    return 0.03*lns+0.0004*lns*lns;
}
void estimate(int lines,double (*pf)(int))
{
    cout<<"行数是 "<<lines<<" 会使用 "<<(*pf)(lines)<<" 小时！"<<endl;
}