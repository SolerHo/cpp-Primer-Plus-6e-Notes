/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  string类的赋值、拼接（合并）和附加
 * 
 * 赋值 —— 不能将一个数组赋给另一个数组，但可以将一个string对象赋另一个string对象。
 * 
 * Example:
 * 
 * char char01[20];                // 创建一个空列表
 * char char02[20] = "Jason";      // 创建一个初始化数组
 * 
 * 
 * string str01;                   // 创建一个空的string对象
 * string str02 = "Soler Ho";      // 创建一个初始化的string对象
 * 
 * char01 = char01;                // 不可执行，一个数组不能赋值给另一个数组
 * str01 = str02;                  // 可执行，可将一个string对象赋给另一个string对象。

 * 
 * string类简化字符串合并操作。
 * 
 * 利用运算符 + 将两个string对象合并起来。
 * 
 * string str01;                  
 * string str02 = "Soler Ho";
 * 
 * string = str01 + str02;
 * 
 * 可以使用运算符 += 将字符串附加到string对象的末尾。
 * 
 * string str01;                  
 * string str02 = "Soler Ho";
 * 
 * str01 += str02;
 * 
 ********************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str01 = "Cplusplus";
    string str02,str03;

    cout<<"将一个string对象赋值给另一个string：str02 = str01\n";
    str02 = str01;

    cout<<"++++++++++++++++++++++++++++\n";
    cout<<"str01 : "<<str01<<", str02 : "<<str02<<endl;

    cout<<"++++++++++++++++++++++++++++\n";
    cout<<"你可以将一个C-style 对象到另一个string对象.\n";
    str02 = "StringAAAA";

    cout<<"++++++++++++++++++++++++++++\n";
    cout<<"str02 : "<<str02<<endl;
    cout<<"合并string后： str03 = str01 + str02\n";
    str03 = str01 + str02;
    cout<<"str03 : "<<str03<<endl;

    cout<<"++++++++++++++++++++++++++++\n";
    cout<<"一个附加到另一个string上\n";
    str01 += str02;

    cout<<"++++++++++++++++++++++++++++\n";
    cout<<"str01 += str02 生成的str01 = "<<str01<<endl;
    str02 += "This is Cplusplus";

    cout<<"++++++++++++++++++++++++++++\n";
    cout<<"str02 += \"This is Cplusplus\"生成 str02 = "<<str02<<endl;

    return 0;
}

