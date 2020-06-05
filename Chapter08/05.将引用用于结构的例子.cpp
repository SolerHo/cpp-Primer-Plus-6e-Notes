/********************************************************************
 * 
 * Date : 2020 - 06 - 04
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 08
 * 
 * description : 将引用用于结构中
 * 
 * 使用结构引用参数的方式与使用基本变量引用相同，只需要在结构参数时使用引用运算符&即可。
 * 
 * 
 ********************************************************************/
#include<iostream>
#include<string>

using namespace std;

/*创建结构*/
struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};

/*声明函数原型*/
void display(const free_throws & ft); 
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target,const free_throws & source);

int main()
{
    /*对部分初始化，其余部分设置为0*/
    free_throws one = {"ifelsa branch",13,14};
    free_throws two = {"Andor Knott",10,16};
    free_throws three = {"Minnie Max",7,9};
    free_throws four = {"Whily Looper",5,9};
    free_throws five = {"Long Long",6,14};
    free_throws team = {"Throwgoods",0,0};

    /*不做初始化*/
    free_throws dup;

    set_pc(one); /*set_pc中的ft为引用，按值传递不可行*/
    display(one); /*使用const引用参数，可以使用按值传递结构，但是使用引用的好处：可以节省时间和内存*/
    accumulate(team,one); /*第一个参数：引用 ———— 可修改，第二个参数：const引用*/
    display(team);

    /*使用返回值作为参数*/
    display(accumulate(team,two));
    accumulate(accumulate(team,three),four);
    display(team);

    /*使用返回值进行赋值*/
    dup = accumulate(team,five); /*添加five的数据给dup*/
    cout<<"Displaying team:\n";
    display(team);
    cout<<"Displaying dup after assignment:\n";
    display(dup);
    set_pc(four);

    /*ill-advised assignment*/
    
    /*将five的数据添加到dup中，再使用four的内容覆盖dup的内容。返回类型是const，不可修改，所以赋值不合法。*/
    accumulate(dup,five) = four;   
    cout<<"Displaying dup after ill-advised assignment:\n";
    display(dup);
    return 0;
}

/*输出展示*/
void display(const free_throws & ft)
{
    cout<<"Name : "<<ft.name<<'\n';
    cout<<"Made : "<<ft.made<<'\t';
    cout<<"Attempts : "<<ft.attempts<<'\t';
    cout<<"Percent : "<<ft.percent<<'\n';
}

/*计算*/
void set_pc(free_throws & ft)
{
    if(ft.attempts!=0)
        ft.percent = 100.0f * float(ft.made)/float(ft.attempts);
    else
        ft.percent = 0;    
}

/**/
free_throws & accumulate(free_throws & target,const free_throws & source) /*const类型，所以不可修改*/ 
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}