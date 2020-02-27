/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  结构中的数组
 * 
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

struct inflatable
{
    char name[20];
    float height;
    float weight;
};


int main()
{
    inflatable member[2] =
    {
        {"Jason HO",1.87,55.45},
        {"Soler HO",1.77,45.5}
    };

    cout<<"member中的两个人的名字是："<<member[0].name<<" and "<<member[1].name<<"\n";

    cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;

    cout<<"身高结合后的名字为："<<member[0].weight + member[1].weight<<" Kg\n";

    return 0;

    /*字段的类型应为整型或枚举，然后加冒号，冒号加数字，用于指定使用的位数，可以使用没有名称的字段来提供间距。
    * 每个成员都被称为位字段（bit field）。
    * 
    * */
}

