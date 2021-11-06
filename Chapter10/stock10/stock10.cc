#include <iostream>
#include "stock10.h"

Stock::Stock() //默认构造函数
{
    std::cout << "Default constructor called \n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co,long n, double pr)
{
    std::cout << "Constructor using " << co << " called \n";
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                << "Transaction is aborted .\n";
        shares = 0;
    }
    else
        shares += n;
    share_val = pr;
    set_tot();
}

// 类析构函数
Stock::~Stock()
{
    std::cout << "Bye, " << company << "! \n";
}

void Stock::buy(long num,double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                << "Transaction is aborted .\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num,double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                << "Transaction is aborted .\n";
    }
    else if (num > shares)
    {
        std::cout << "You can't sell more than you have ! "
                << "Thansaction is aborted . \n";
    }
    else{
        shares -=num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();    
}

void Stock::show()
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed,ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Compamy : " << company
        << " Shares : " << shares << "\n";
    cout << " Share price : $" << share_val;

    // 设置格式为 #.##
    cout.precision(2);
    cout << " Total Worth : $ " << total_val << "\n";

    // 存储原始格式
    cout.setf(orig,ios_base::floatfield);
    cout.precision(prec);
}
