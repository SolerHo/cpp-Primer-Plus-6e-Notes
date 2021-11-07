// 主程序
#include <iostream>
#include "stock20.h"
using namespace std;

int main()
{
    {
    cout << "Using construction to create new objects \n";
    Stock Stock1("NanoSmart",12,20.0); //隐式设置
    Stock1.show();

    Stock Stock2 = Stock ("Boffo Objects",2,2.0);
    Stock2.show();

    Stock top = Stock1.topval(Stock2);
    cout << "\n Now show the top val : \n";
    top.show();
    }
    return 0;
}
