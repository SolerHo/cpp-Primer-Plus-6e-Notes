/********************************************************************
 * 
 * Date : 2020 - 03 - 06
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  if else语句的例子
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    char ch;

    cout<<"输入文本内容："<<endl;
    cin.get(ch);

    while(ch != '.')
    {
        if(ch == '\n')
            cout<<ch;
        else
            cout<<++ch;
        cin.get(ch);
    }
    cout<<"\n";

    return 0;
}
