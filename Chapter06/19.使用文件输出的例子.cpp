/********************************************************************
 * 
 * Date : 2020 - 03 - 16
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description : 使用文件输出的例子
 * 
 * 要求用户输入信息，然后将信息显示在屏幕上，然后再将信息内容写入到文件中。
 * 
 ********************************************************************/

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char name[50];
    int year;
    char address[100];

    ofstream outFile; // 常见一个输出对象
    outFile.open("test.txt"); // 和文件进行关联

    cout<<"请输入你的姓名：";
    cin.getline(name,50);
    cout<<"请输入你的年龄：";
    cin>>year;
    cout<<"请输入你的居住地址：";
    cin>>address;

    // 屏幕上输出使用cout的这些信息
    cout<<"\n";
    cout<<fixed; 
    cout.precision(2); 
    cout.setf(ios_base::showpoint);
    cout<<"我的名字是："<<name<<endl;
    cout<<"年龄是："<<year<<endl;
    cout<<"我的居住地址是："<<address<<endl;

    // 使用outFile替代输出做同样的输出过程
    outFile<<fixed; // 
    outFile.precision(2); // precision(val) 设置val为新的浮点数精度值, 并返回原值
    outFile.setf(ios_base::showpoint); // setf(flags) 添加格式标志flags, 返回所有标志的原本状态.
    outFile<<"我的名字是："<<name<<endl;
    outFile<<"我的年龄是："<<year<<endl;
    outFile<<"我的居住地址是："<<address<<endl;

    outFile.close(); // 关闭文件
    return 0;

}
