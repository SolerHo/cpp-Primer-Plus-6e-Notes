/********************************************************************
 * 
 * Date : 2020 - 03 - 06
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  if else 语句嵌套的例子
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

const int Fave = 27;

int main()
{
    int n;

    cout<<"请输入一个我最喜欢的数字（1 - 100）：";

    do
    {
        cin>>n;
        if(n<Fave)
            cout<<"数字太小了！继续再猜:";
        else if(n>Fave)
            cout<<"数字太大了！继续再猜:";
        else
            cout<<Fave<<" 是对的！\n";
    }while(n!=Fave);
    
    return 0;
}
