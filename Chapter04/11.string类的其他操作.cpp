/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  string类的其他操作
 * 
 * 头文件cstring中的strcpy()将字符串复制到字符数组中。
 * 
 * 使用函数strcat()将字符串附加到字符数组末尾。
 * 
 * strlen()函数是一个常规函数，接受一个C-风格字符串作为参数，并返回该字符串包含的字符数。
 * 
 * 
 ********************************************************************/

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    char char01[20];
    char char02[20] = "Solerho";

    string str01;
    string str02 = "Soler1995";

    // 赋值string对象和字符数组
    str01 = str02;          // 复制str02给str01
    strcpy(char01,char02); // 复制char02 到char01

    // 附加一个string对象和字符数组
    str01 += " paste";
    strcat(char01," juice"); // 把 juice这6个字符复制给char01

    // 查找string对象的长度和C-风格的string
    int len01 = str01.size(); // str是一个对象，二size()是一个类方法。方法是一个函数，只能通过其所属类的对象进行调用。
    int len02 = strlen(char01);

    cout<<"The string "<<str01<<" contains "<<len01<<" characters.\n";
    cout<<"The String "<<char01<<" contains "<<len02<<" characters.\n";

    return 0;
}
