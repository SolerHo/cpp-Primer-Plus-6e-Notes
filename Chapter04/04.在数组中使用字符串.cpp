/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  在数组中使用字符串
 * 
 * 要将字符串存储到数组中，常用的方法：
 * 
 * 将数组初始化为字符串常量
 * 
 * 将键盘或者是文件读入到数组中
 * 
 ********************************************************************/


#include<iostream>

using namespace std;

const int Size = 15;

int main()
{
    char name1[Size];
    char name2[Size] = "C++owboy";

    // 字符串的拼接
    cout<<"Howdy!I'm "<< name2;
    cout<<"!,What's your name?\n";
    cin>>name1;


    // strlen()函数返回的是存储在数组中的字符串的长度，而不是数组本身的长度
    // strlen()只计算可见的字符，而不把空字符计算在内。
    cout<<"Well, "<<name1<<",your name has : "<<strlen(name1)<<" letters and is stored!\n" ;
    cout<<"In an array of "<<sizeof(name1)<<" Bytes\n";

    cout<<"Your iniatial is "<<name1[0]<<".\n"; // name1数组中的第一个元素
    name2[3] = '\0';

    cout<<"Here are the first 3 characters of my name:"<<name2<<endl;

    return 0;

}


