// stock.cc 类方法的实现
// version 00

#include <iostream>
#include "stock.h"
#include <string>
using namespace std;

void Stock::acquire(const std::string &co,long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative;" 
                << company << " shares set to 0. \n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}


void Stock::buy(long num,double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares can't be negative;"
                << "Transaction is aborted.\n";
    }
    else{
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num,double price)
{
    if(num < 0)
    {
        std::cout << "Number of shares can't be negative;"
        << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        std::cout << "You can't sell more than you have ! "
                <<"Transaction is aborted.\n";
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
    std::cout << "company : " << company
              << " shares : " << shares << "\n"
              << " share_val : $" << share_val
              << " Total_worth : $" << total_val << "\n";
}
