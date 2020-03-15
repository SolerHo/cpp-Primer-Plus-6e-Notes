/********************************************************************
 * 
 * Date : 2020 - 03 - 06
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  break和continue语句
 * 
 * break语句：终止循环 或 switch 语句，程序将继续执行紧接着 循环 或 switch 的下一条语句。
 * 
 * continue语句:引起循环跳过主体的剩余部分，立即重新开始测试条件。
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

const int ArSize = 80;

int main()
{
    char line[ArSize];

    int space = 0;

    cout<<"请输入一行文本：\n";
    cin.get(line, ArSize);
    cout<<"完整的行是：\n"<<line<<endl;
    cout<<"Line through first period:\n"<<line<<endl;
    for(int i = 0; line[i]!='\0';i++)
    {
        cout<<line[i];
        if(line[i] == '.') 
            break;
        if(line[i] != ' ')
            continue;
        space++;
    }
    cout<<"\n"<<space<<endl;
    cout<<"结束了！拜拜！\n";

    return 0;
}
