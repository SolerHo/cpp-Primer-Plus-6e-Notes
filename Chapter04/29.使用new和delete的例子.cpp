/********************************************************************
 * 
 * Date : 2020 - 02 - 29
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  使用new和delete的例子
 * 
 ********************************************************************/

#include<iostream>
#include<cstring>

using namespace std;
char * getname(void);
int main()
{
    char * name;

    name = getname();
    cout<<name<< " at "<<(int *) name<<"\n";
    delete [] name;

    name = getname();
    cout<<name<<" at "<<(int *) name<<"\n";
    delete [] name;
    return 0;
}

char * getname() // 进行内存的分配，在main()函数中释放内存
{
    char temp[80];
    cout<<" Enter last name:";
    cin>>temp;
    char * pn = new char[strlen(temp) + 1]; // 检查内存块能否容纳字符串
    strcpy(pn,temp);

    return pn;
}
