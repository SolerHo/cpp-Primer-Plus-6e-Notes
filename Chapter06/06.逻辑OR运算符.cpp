/********************************************************************
 * 
 * Date : 2020 - 03 - 06
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : SIX
 * 
 * description :  逻辑或（OR）运算符：||
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    cout<<"This program may reformat your hard disk\n"
        "and destroy all your data\n"
        "do you wish to continue?<Y/N>";

    char ch;
    cin>>ch;

    if(ch == 'y' || ch == 'Y') /*大小写都需要判断，只需要读取一个字符即可*/
        cout<<"You were warned!\a\a\n";
    else if(ch == 'n'||ch == 'N')
        cout<<"A wise choice...bye\n";
    else
    cout<<"That wasn't a y or n! apparently you "
        "can't follow\ninstructions, so "
        "I'll trash your disk anway.\a\a\n";

    return 0;
    
}
