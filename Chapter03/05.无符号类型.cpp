/********************************************************************
 * 
 * Date : 2020 - 02 - 25
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  无符号类型
 * 
 * 无符号类型（unsigned type）的优点：可以增大变量能够存储的最大值
 * 
 * 创建无符号类型的变量时，只需要使用unsigned来进行声明即可。
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

int main()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam; // 无符号短整型

    cout<<"Sam has "<<sam<<" dollars and sue has "<<sue;
    cout<<" dollars deposited."<<endl<< "Add $1 to each accout."<<endl<<"Now";

    sam = sam + 1;
    sue = sue + 1;
    cout<<"++++++++++++++++++++++++++++="<<endl;
    cout<<"Sam has "<<sam<<" dollars and sue has "<<sue;
    cout<<" dollars deposited.lnporr sam!"<<endl;


    sam = 0;
    sue = 0;

    cout<<"++++++++++++++++++++++++++++="<<endl;
    cout<<"Sam has "<<sam<<" dollars and sue has "<<sue;
    cout<<" dollars deposited."<<endl;
    cout<<"Take $1 from each account."<<endl<<"Now";

    sam = sam - 1;
    sue = sue - 1;
    cout<<"++++++++++++++++++++++++++++="<<endl;
    cout<<"Sam has "<<sam<<" dollars and sue has "<<sue;
    cout<<" dollars deposited."<<endl<<"Lucky Sue!"<<endl;

    return 0;

    
}

/*
short变量加unsigned和没有unsigned，两者显示结果都是不一样的。

*/
