/********************************************************************
 * 
 * Date : 2020 - 03 - 04
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  比较string类字符串
 * 
 * 
 ********************************************************************/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string word = "?ate";

    for(char ch = 'a'; word !="mate";ch++)
    {
        cout<<word<<endl;
        word[0] = ch;
    }
    cout<<"循环结束后，word的结果是： "<<word<<endl;
    return 0;
}