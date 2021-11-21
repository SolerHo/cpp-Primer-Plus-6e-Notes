// dma.h ----- inheritence and dynamic memery allocation

#ifndef DMA_H_
#define DMA_H_H

#include <iostream>
class baseDMA
{
    private:
        char * label;
        int rating;
    public:
        baseDMA(const char * l = "null",int r = 0);
        baseDMA(const baseDMA &rs);
        virtual ~baseDMA(); // 虚析构函数
        baseDMA & operator=(const baseDMA &rs);
        friend std::ostream & operator << (std::ostream & os, const baseDMA & rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA: public baseDMA //未使用new进行DMA的派生类
{
    private:
        enum { COL_LEN = 40};
        char color[COL_LEN];
    public:
        lacksDMA(const char *c = "Blank",const char * l = "null",int r =0);
        lacksDMA(const char *c,const baseDMA &rs);
        friend std::ostream & operator<<(std::ostream &os,const lacksDMA & rs);
};

// friend class with DMA
class hasDMA: public baseDMA //使用new进行DMA的派生类
{
    private:
        char *style;
    public:
        hasDMA(const char *s = "None",const char * l = "null",int r = 0);
        hasDMA(const char *s, const baseDMA & rs);
        hasDMA(const hasDMA &hs);
        ~hasDMA(); //析构函数，基类中已定义，所以会直接调用
        hasDMA & operator = (const hasDMA &rs);
        friend std::ostream & operator << (std::ostream &os,const hasDMA &rs);
};
#endif