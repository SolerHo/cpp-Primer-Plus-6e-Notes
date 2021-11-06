// main.cc 主程序
// version 00
#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include "stock.h"
#include <string>

int main(void)
{
    Stock solerho;
    solerho.acquire("Tencent",20,500);
    solerho.show();

    solerho.buy(15,480);
    solerho.show();

    solerho.sell(400,600);
    solerho.show();

    solerho.buy(40,490);
    solerho.show();
    return 0;
}