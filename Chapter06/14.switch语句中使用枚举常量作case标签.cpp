/********************************************************************
 * 
 * Date : 2020 - 03 - 06
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  switch语句中使用枚举常量作case标签
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

enum{red,orange,yellow,green,blue,violet,indigo};

int main()
{
    cout<<"请输入颜色编号（0～6）：";
    int code;
    cin>>code;

    while(code>=red && code<indigo)
    {
        switch(code)
        {
            case red:
                    cout<<"her lips were red.\n";
                    break;
            case orange:
                    cout<<"her hair was orange.\n";
                    break;
            case yellow:
                    cout<<"her shoes were yellow.\n";
                    break;
            case green:
                    cout<<"her nails were green.\n";
                    break;
            case blue:
                    cout<<"her sweatsuit was blue.\n";
                    break;
            case violet:
                    cout<<"her eyes were violet.\n";
                    break;
            case indigo:
                    cout<<"her mood was indigo.\n";
                    break;
        }
        cout<<"请输入颜色编号（0～6）：";
        cin>>code;
    }
    cout<<"结束了！拜拜！"<<endl;

    return 0;
}
