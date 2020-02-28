/********************************************************************
 * 
 * Date : 2020 - 02 - 28
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  指针的问题
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

 int main()
 {
     int updates = 6;
     int * p_updates;
     p_updates = &updates;

    // 表示值的两种方式
     cout<<"Values : updates = "<<updates;
     cout<<",p_updates = "<<*p_updates<<endl;

     // 表示地址的两种方式
     cout<<"Address : &updates = "<<&updates;
     cout<<", p_updates = "<<p_updates<<endl;

     // 使用指针去改变值
     *p_updates = *p_updates + 1;
     cout<<"Now updates = "<<updates<<endl;
     return 0;
     

 }
