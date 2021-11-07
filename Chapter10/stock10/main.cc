// 主程序
#include <iostream>
#include "stock10.h"
using namespace std;

int main()
{
    {
    cout << "Using construction to create new objects \n";
    Stock Stock1("NanoSmart",12,20.0); //隐式设置
    Stock1.show();

    Stock Stock2 = Stock ("Boffo Objects",2,2.0);
    Stock2.show();

    cout << "Assigning Stock1 to Stock2 : \n";
    Stock2 = Stock1;
    cout << "Listing Stock1 and Stock2 : \n";
    Stock1.show();
    Stock2.show();

    cout << "Using a Construction to reset an object \n";
    Stock1 = Stock("Nifty Foods",10,50.0); //重置，重新进行赋值
    cout << "Revised Stock1 : \n";
    Stock1.show();
    cout << " Done \n";
    }
    return 0;
}
