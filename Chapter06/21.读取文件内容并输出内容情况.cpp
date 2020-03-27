/********************************************************************
 * 
 * Date : 2020 - 03 - 15
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description : 打开用户指定的文件，读取其中的数字，然后指出文件中包含多少个值以及他们的和与平均数。
 * 
 ********************************************************************/
#include<iostream>
#include<fstream> // 文件I/O支持
#include<cstdlib> // 为exit提供支持

using namespace std;

const int SIZE = 60;

int main()
{
    char filename[SIZE];
    fstream inFile; // 处理文件输入的对象
    cout<<"请输入数据文件的名字：";
    cin.getline(filename,SIZE);
    inFile.open(filename); // 使得inFile与文件进行关联

    if(!inFile.is_open()) // 文件打开失败
    {
        cout<<"不能打开文件 "<<filename<<endl;
        cout<<"程序终止！\n";
        exit(EXIT_FAILURE);
    }

    double value; 
    double sum = 0.0; // 计算总和的变量
    int count = 0; // 统计个数的变量

    inFile>>value;
    while (inFile.good())
    {
        ++count; // 一个一个地读取
        sum += value; // 计算浏览过的总和
        inFile>>value; // 获取文本的值
    }

    if(inFile.eof())
        cout<<"文件已经结束了！\n";
    else if(inFile.fail ())
        cout<<"数据不匹配就终止输入！\n";
    else
        cout<<"未知原因就终止输入！\n";
    if(count==0)
        cout<<"没有数据过程！\n";
    else 
    {
        cout<<"元素读取："<<count<<endl;
        cout<<"总和 sum = "<<sum<<endl;
        cout<<"平均数是 Average = "<<sum/count<<endl;
    }
    inFile.close(); // 文件结束并关闭
    
    return 0;
}

