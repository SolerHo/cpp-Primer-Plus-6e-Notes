/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  混合输入字符串和数字
 * 
 * 
 ********************************************************************/


#include<iostream>

using namespace std;

int main()
{
    cout<<"你出生哪一年？\n";
    int year;
    cin>>year;
    cin.get(); // 无法输入地址的解决方法：直接使用get()进行读取之前丢弃换行符。
    cout<<"你的出生地是：\n";
    char address[80];
    cin.getline(address,80);
    cout<<"你的出生日期："<<year<<endl;

    cout<<"你的出生地是："<<address<<endl;

    cout<<"全部结束！！！！"<<endl;

    return 0;
}


/*分析
无法输入地址

原因：当cin输入年份时，将回车键生成的换行符留在了输入队列中。

后面的cin.getline看到了换行符后，就会认为是一个空行，并将一个空字符串赋给address数组。


解决方式：在读取地址之前要先读取并丢弃换行符。

*/

