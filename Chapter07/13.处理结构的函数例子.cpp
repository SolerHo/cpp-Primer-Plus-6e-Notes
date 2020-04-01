/********************************************************************
 * 
 * Date : 2020 - 03 - 31
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 07
 * 
 * description : 处理结构的函数例子
 * 
 ********************************************************************/
#include<iostream>
#include<cmath>

using namespace std;

// 结构的声明
// x 和 y 构成的直角坐标系
struct rect
{
    double x; // 距原点的水平距离
    double y; // 距原点的垂直距离
};

// 构建偏离原点的距离和方向
struct polar
{
    double distance; // 偏离距离
    double angle;  // 偏离的角度
};
/*原型声明*/
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    rect rplace; // 右边
    polar pplace;

    cout<<"请输入 x 和 y 的值：";
    /*抽取运算符（<<）读取输入，并测试表达式中，输入是否成功。*/
    while (cin>>rplace.x>>rplace.y) 
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout<<"接下来的两个数字(输入q即可停止)：";
    }
    cout<<"结束了！\n";
    return 0;
}

void show_polar(polar dapos)
{
    const double Rad_to_deg = 57.29577951; // 弧度值乘以180/pi 约等于 57.29577951。
    cout<<"distance = "<<dapos.distance;
    cout<<" , andle = "<<dapos.angle * Rad_to_deg<<" degrees \n";
}

polar rect_to_polar(rect xypos) 
{
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y,xypos.x);
    return answer; // 返回polar结构
}


