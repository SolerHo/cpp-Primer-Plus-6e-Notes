#include <iostream>
#include "golf.h"
#include <cstring>

using namespace std;

void setgolf(golf &g,const char *name,int hc)//将name常量和hc的值传入到结构引用中
{
    strcpy(g.fullname,name); //将name拷贝
    g.handicap = hc;
}

int setgolf(golf &g)
{
    cout << " please input user fullname : ";
    cin.getline(g.fullname,Len);

    if(strcmp(g.fullname,"")==0){ //如果fullname为空，直接返回-1
        return -1;
    }
    else
    {
        cout << "please input handicap is : ";
        cin >> g.handicap;
        cin.get(); //消除回车符
        return 1;
    }
}

void handicap(golf &g,int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    cout << "the fullname is : "<<g.fullname <<endl;
    cout << "the handicap is : "<< g.handicap <<endl;
}