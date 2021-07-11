/********************************************************************
 * 
 * Date : 2021 - 06 - 11
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 08
 * 
 * description : 将引用用于类对象的例子
 * 
 * 例子的基本思想：创建一个函数，将指定的字符串加入到另一个字符串的前面和后面。
 * 
 * 
 ********************************************************************/
#include<iostream>
#include<string>

using namespace std;

string version01(const string & s1,const string & s2);
const string & version02(string & s1,const string & s2); /*has side effect*/
const string & version03(string & s1,const string & s2); /*bad design*/

int main(void)
{
    string input;
    string copy;
    string result;

    cout<<"Enter a string : ";
    getline(cin,input); /*逐行读取输入的内容*/
    copy = input;
    cout<<"Your string as entered : "<<input<<endl;
    result = version01(input,"***");

    cout<<"\n ------- version01 -------"<<endl;
    cout<<"Your string enhanced : "<<result<<endl;
    cout<<"Your original string : "<<input<<endl;

    cout<<"\n ------- version02 -------"<<endl;
    result = version02(input,"###");
    cout<<"Your string enhanced : "<<result<<endl;
    cout<<"Your original string : "<<input<<endl;

    cout<<"\n ------- version03 -------"<<endl;
    cout<<"Resetting original string : \n";
    input = copy;
    result = version03(input,"@@@");
    cout<<"Your string enhanced : "<<result<<endl; /*程序崩溃*/
    cout<<"Your original string : "<<input<<endl;

    return 0;

}

string version01(const string & s1,const string & s2)
{ 
    /*创建临时变量*/
    string temp;
    
    temp = s2 + s1 + s2;

    return temp;
}


const string & version02(string & s1,const string & s2) //
{
    /*不创建临时string对象，而是直接对原来的string进行了修改*/
    s1 = s2 + s1 + s2; /*s1可以修改的原因：没有使用使用限制声明const*/

    return s1;
}

const string & version03(string & s1,const string & s2)
{ 
    string temp;

    temp = s2 + s1 + s2;

    return temp; /*程序引用已经释放的内存*/ 
}