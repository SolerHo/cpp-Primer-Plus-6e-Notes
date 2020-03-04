/********************************************************************
 * 
 * Date : 2020 - 03 - 04
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  C-风格字符串的比较
 * 
 * 
 * 数组名是数组的地址。用引号括起来的字符串常量也是其地址。
 * 
 * C-风格字符串库中的strcmp()函数来比较，函数接收两个字符串地址作为参数（参数可以是指针、字符串常量或字符数组名）。
 * 如果字符串相同，函数返回 0；
 * 如果第一个字符串按字母顺序排在第二个字符串之前，则strcmp()函数返回一个负值。
 * 
 * 如果第一个字符串按字母顺序排在第二个字符串之后，则strcmp()函数返回一个正值。
 * 
 ********************************************************************/
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char word[5] = "?ate";
    for(char ch = 'a';strcmp(word,"fate");ch++)
    {
        cout<<word<<endl;
        word[0] = ch;
    }
    cout<<"循环结束后，单词是： "<<word<<endl;

    return 0;
}