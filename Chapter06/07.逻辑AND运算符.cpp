/********************************************************************
 * 
 * Date : 2020 - 03 - 06
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  逻辑AND运算符：&&
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

const int ArSize = 6;

int main()
{
    float naaq[ArSize];
    cout<<"Enter the NAAQs(New Age Awareness Quotients)"
        "of \n your neighbours . Program terminates "
        "when you make \n"<<ArSize<< " entries "
        <<" or enter a negative value.\n";

    int i = 0;
    float temp;

    cout<<"First value:";
    cin>>temp;

    while(i<ArSize&&temp>=0) /*必须两个表达式满足，也就是说两个表达式必须为真，语句块才可以执行*/
    {
        naaq[i] = temp;
        ++i;
        if(i<ArSize)
        {
            cout<<"Next value:";
            cin>>temp;
        }
    }
    if(i == 0)
        cout<<"No data -- bye\n";
    else
    {
        cout<<"Enter your NAAQ:";
        float you;
        cin>>you;
        int count = 0;
        for(int j = 0; j < i;j++)
            if(naaq[j] > you)
            ++count;
        cout<<count;
        cout<<" of your neighbours have greater Awareness of \n"
        <<" the New Age than you do.\n";
    }
    return 0;
}
