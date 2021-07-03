/********************************************************************
 * 
 * Date : 2021 - 07 - 03
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 08
 * 
 * description : 字符串函数中的默认参数
 * 
 ********************************************************************/

#include<iostream.h>

const int ArSize = 80;

char *left(const char * str,int n = 1);

int main()
{
    using namespace std;
    char sample[ArSize];
    cout <<"Enter a string : \n";
    cin.get(sample,ArSize);
    char * ps = left(sample,4);
    cout << ps << endl;
    delete [] ps;
    ps = left(sample);
    cout << ps << endl;
    delete [] ps;
    return 0;
}