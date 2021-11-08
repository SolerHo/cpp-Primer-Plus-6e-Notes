// stock20.h 析构函数和构造函数
// version 20

#ifndef STOCK20_H__
#define STOCK20_H__
#include <string>
class Stock
{
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot(){total_val = shares * share_val;}
    public:
        // 2个构造函数
        Stock(); // 默认构造函数
        Stock(const std::string & co, long n = 0, double pr = 0.0);
        ~Stock(); //析构函数
        void buy(long num,double price);
        void sell(long num,double price);
        void update(double price);
        void show();
        const Stock &topval(const Stock &s) const;
};
#endif