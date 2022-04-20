#ifndef WORKER0_H_
#define WORKER0_H_

#include <string>

class Worker // 抽象基类
{
    private:
        std::string fullname;
        long id;
    public:
        Worker() : fullname("no one"), id(0L) {}
        Worker(const std::string & s, long n)
            : fullname(s),is(n) {}
        virtual ~Worker() = 0; // 纯虚函数析构函数
        virtual void Set();
        virtual void Show() const;            
};


class Waiter : public Worker // 多重继承
{
    private:
        int panache;
    public:
        Waiter() : Worker(),panache(0) {}
        Waiter(const std::string & s, long n, int p = 0)
            : Worker(s,n), panache(p) {}
        Waiter(const Worker & wk, int p = 0)
            : Worker(wk),panache(p) {}
        void Set();
        void Show() const;
}

class Singer : public Worker // 多重继承
{
    protected:
        enum {other,alto,contralto,saprano,bass,baritone,tenor};
        enum {Vtype = 7};
    private:
        static char *pv[Vtype]; // 
        int voice;
    public:
        Singer() : Worker(),voice(other) {}
        Singer(const std::string & s, long n, int v = other)
            : Worker(s,n),voice(v) {}
        Singer(const Worker & wk, int v = other)
            : Worker(wk), voice(v) {}
        void Set();
        void Show() const;
};

#endif