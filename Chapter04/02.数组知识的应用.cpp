/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  数组知识的应用
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    // 创建一个名字为yams的数组，包含了3个元素，编号是0～2.
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    // 使用逗号分隔的值列表（初始化列表），然后用花括号括起来即可。
    // 列表中的空格是可选的，如果没有初始化函数中定义的数组，其元素值也是不确定。
    int yamcosts[3] = {1,2,3};

    cout<<"yams 数组是："<<yams[0]+yams[1]+yams[2]<<endl;
    cout<<"yams[1] = "<<yams[1]<<endl;
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout<<"total yam = "<<total<<endl;

    // sizeof运算符返回类型或数据对象的长度（单位为字节）。
    // 如果将sizeof运算符用于数组名，得到的是整个数组的字节数。
    // 如果sizeof用于数组元素，得到的是元素的长度（单位为字节）。
    cout<<"\n yams数组的大小 = "<<sizeof(yams)<<" Bytes.\n";
    cout<<"一个元素的大小 = "<<sizeof(yams[0])<<" Bytes.\n";

    return 0;
}

