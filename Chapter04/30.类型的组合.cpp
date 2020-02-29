/********************************************************************
 * 
 * Date : 2020 - 03 - 01
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  类型组合（数组、结构、指针）
 ********************************************************************/
 
#include<iostream>
using namespace std;

struct antarctica_years_end
{
    int year;
};

int main()
{
    antarctica_years_end s01,s02,s03; // 创建变量
    s01.year = 1996; // 使用成员运算符访问成员
    
    antarctica_years_end *pa = &s02; // 创建指向结构的指针
    pa->year = 1999; // 指针的地址设置为有效后，就可以使用间接成员运算符来访问。

    antarctica_years_end trio[3]; // 创建数组
    trio[0].year = 1995; // 使用成员运算符访问元素的成员

    cout<<trio->year<<endl;

    const antarctica_years_end* arp[3] = {&s01,&s02,&s03};
    cout<<arp[1]->year<<endl;
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp;
    cout<<(*ppa)->year<<endl;
    cout<<(*(ppb + 1))->year<<endl;

    return 0;


}