/********************************************************************
 * 
 * Date : 2020 - 03 - 06
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  使用&&符号来设置取值范围
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

const char *qualify[4] = 
{
    "10000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festivals.\n"
};

int main()
{
    int age;
    cout<<"请输入你今年的年龄：";
    cin>>age;
    int index = 0;

    if(age>17&&age<35)
        index = 0;
    else if(age>=35&&age<50)
        index = 1;
    else if(age>=50&&age<65)
        index = 2;
    else
        index = 3;
    
    cout<<"你取得的资格是："<<qualify[index]<<endl;
    
    return 0;
}
