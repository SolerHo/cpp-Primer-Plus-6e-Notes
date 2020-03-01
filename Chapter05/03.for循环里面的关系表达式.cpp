/********************************************************************
 * 
 * Date : 2020 - 03 - 01
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  for循环里面的关系表达式
 * 
 * 注意点：C++表达式是值或值与运算符的组合，每个C++表达式都有值。
 * 
 ********************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int value;
    int x = 10;
    printf("请输入一个数字 : ");
    scanf("%d",&value);

    cout<<"此时的 value = "<<value<<endl;

    cout<<"此时的X < 10的值是 ："<<(x<value)<<endl;
    cout<<"此时的X <= 10的值是 ："<<(x<=value)<<endl;
    cout<<"此时的X > 10的值是 ："<<(x>value)<<endl;
    cout<<"此时的X >= 10的值是 ："<<(x>=value)<<endl;

    cout.setf(ios_base::boolalpha); // ios_base::boolalpha作为cout.setf()的参数

    cout<<"此时的X < 10的值是 ："<<(x<value)<<endl;
    cout<<"此时的X <= 10的个数是 ："<<(x<=value)<<endl;

    return 0;
}
