/********************************************************************
 * 
 * Date : 2020 - 03 - 05
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  初始化和二维数组
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

const int Cities = 5;
const int Years = 4;

int main()
{   // const string cities[Cities] 如果要让字符串可以修改，省略限定符const。
    const char * cities[Cities] =  // 数组指针
    {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };
    // 二维数组的初始化
    int maxtemps[Years][Cities] = 
    {
        {96,100,87,101,105},
        {96,98,91,107,104},
        {97,101,93,108,107},
        {98,103,95,109,108}
    };

    cout<<"2008 ～ 2011 最大温度：\n\n";
    for(int city = 0; city < Cities; ++city)
    {
        cout<<cities[city]<<":\t";
        for(int year = 0; year < Years; ++year)
            cout<<maxtemps[year][city]<<"\t";
        cout<<endl;
    }
    return 0;
}