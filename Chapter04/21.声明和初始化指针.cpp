/********************************************************************
 * 
 * Date : 2020 - 02 - 28
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  声明和初始化指针
 * 
 * 
 ********************************************************************/


/**指针的声明
 * 
 * 指针的声明必须指定指向的数据的类型。
 * 
 * 例如：int *p_updates; *p_updates 的类型是int，所以*运算符被用于指针，所以p_updates变量必须是指针。
 * 
 * 运算符*两边的空格是可选的。
 * 例子：int *ptr; // 该情况强调：*ptr是一个int类型的值。
 * 
 * 例子：int* ptr; // 该情况强调：int* 是一种类型，指向int的指针。
 * 
 * 
 * 在C++中，int * 是一种复合类型，是指向int的指针。
 * 
 * double * tax_ptr;
 * 
 */

#include<iostream>

using namespace std;

int main()
{
    int higgens = 5;
    int * pt = &higgens;
    
    cout<<"Values of higgens = "<<higgens<<endl;
    cout<<";Address of higgens = "<<&higgens<<endl;
    
    cout<<"Value of pt = "<<*pt<<endl;

    cout<<";Address of pt = "<<pt<<endl;
    
    return 0;
}

/**
 * 指针的陷阱
 * 
 * 在C++创建指针时，计算机将分配用来存储地址的内存，但是不会分配用来存储指针所指向的数据的内存。
 * 
 * 注意点：一定要在对指针应用解除时引用运算符(*)之前，将指针初始化为一个确定的、适当的地址。
 * 
 */