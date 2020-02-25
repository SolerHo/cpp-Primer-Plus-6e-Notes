/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * description : 
 * 
 * 编写C++程序，使用三个函数（包括了main()函数），输出以下内容：
 * Three blind mice
 * Three blind mice
 * See how they run
 * See how they run
 * 其中一个函数调用两次，该函数生成前两行，另一个函数也调用两次，输出剩下的内容。
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

void func_A()
{
    cout<<"Three blind mice"<<endl;
}

void func_B()
{
    cout<<"See how they run"<<endl;
}

int main(void)
{
    func_A();
    func_A();

    func_B();
    func_B();
    return 0;
}