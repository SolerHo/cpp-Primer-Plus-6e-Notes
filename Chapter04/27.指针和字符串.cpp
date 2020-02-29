/********************************************************************
 * 
 * Date : 2020 - 02 - 29
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  指针和字符串
 * 
 * 
 ********************************************************************/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    /**
     * 数组名是第一个元素的地址。
     * 
     * 如果给cout提供一个字符的地址，则它将从该字符开始打印，直到遇到空字符为止。
     * 
     * 在cout和多数C++表达式中，char数组名、char指针以及用引号括起来的字符串常量都被解释为字符串第一个字符的地址。
     * 
     */
    char animal[20] = "bear";
    const char * bird = "wren"; // 字符串字面值是常量，不能修改
    char * ps; // 未被初始化，不指向任何字符串。


    cout<<animal<<" and ";
    cout<<bird<<"\n";

    cout<<"请输入一个动物：";
    cin>>animal;

    ps = animal; 
    cout<<ps<<":\n";

    /**
     * 不要使用字符串常量或未被初始化的指针来接收输入。
     * 
     * 在字符串读入程序时，应使用已分配的内存地址。该地址不是数组名，也可以使用new初始化过的指针。
     */
    cout<<"Before using strcpy():\n";
    cout<<animal<< " at "<<(int *) ps<<endl;
    
    ps = new char[strlen(animal)]; // strlen()确定字符串的长度,使用new来分配刚好足够存储字符串的空间
    /**strcpy()接受两个参数,第一个：目标地址，第二个：要复制的字符串的地址。
     * 
     * 要确定目标空间有足够的空间来存储副本
     */
    strcpy(ps,animal); 

    cout<<" After using strcpy():\n";
    cout<<animal<<" at "<<(int *) ps<<endl;
    delete [] ps;
    return 0;

}
