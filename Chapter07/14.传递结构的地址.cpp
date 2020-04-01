/********************************************************************
 * 
 * Date : 2020 - 04 - 01
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 07
 * 
 * description : 传递结构的地址
 * 
 ********************************************************************/
#include<iostream>
#include<cmath>

using namespace std;

// 结构模版
struct polar 
{
    double distance; // 距离
    double angle; // 方向
};

struct rect
{
    double x; // 水平线距离
    double y; // 垂直线距离
};

// 函数原型
void rect_to_polar(const rect *pxy,polar *pda);
void show_polar(const polar *pda);

int main(void)
{
    rect rplace;
    polar pplace;

    cout<<"请输入 x 和 y 的值：";
    while(cin>>rplace.x>>rplace.y)
    {
        rect_to_polar(&rplace,&pplace); // 通过地址
        show_polar(&pplace);
        cout<<"接着输入另外的两个数(输入q即可停止)：";
    }
    cout<<"结束了！Bye-Bye！";
    return 0;
}

void show_polar(const polar *pda)
{
    const double Rad_to_deg = 57.29577951; //弧度转换为角度
    cout<<"距离 distance = "<<pda->distance;
    cout<<" ,斜角 angle = "<<pda->angle*Rad_to_deg<<" 度。\n";
}
void rect_to_polar(const rect *pxy,polar *pda)
{
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y*pxy->y);
    pda->angle = atan2(pxy->y,pxy->x);
}


