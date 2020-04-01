/********************************************************************
 * 
 * Date : 2020 - 03 - 31
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 07
 * 
 * description : 使用结构的函数
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

struct travel_time
{
    int hours;
    int mins;
};

const int Mins_per_hr = 60;

travel_time sum(travel_time t01,travel_time t2);
void show_time(travel_time t);

int main()
{
    travel_time day01 = {5,45};
    travel_time day02 = {5,55};

    travel_time trip = sum(day01,day02); // 调用函数
    cout<<"这两天的总和是：";
    show_time(trip);

    return 0;
}

travel_time sum(travel_time t01,travel_time t02)
{
    travel_time total;

    /*使用句点成员运算符对结构中的成员进行访问*/
    total.mins = (t01.mins + t02.mins)%Mins_per_hr;
    total.hours = t01.hours + t02.hours + (t01.mins + t02.mins)/Mins_per_hr;

    return total;
}

void show_time(travel_time t)
{
    cout<<t.hours<<" hours "<<t.mins<<" minutes\n";
}