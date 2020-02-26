/********************************************************************
 * 
 * Date : 2020 - 02 - 26
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : THREE
 * 
 * description :  浮点数的应用例子
 * 
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0;
    const float million = 1.0e6;

    cout<<"tub = "<<tub<<", a million tubs = "<<million * tub<<",\nand ten million tubs = "<<endl;
    cout<<10 * million * tub <<endl;

    cout<<"mint = "<<mint<<" and a million mints = "<<endl;
    cout<<million * mint<<endl;

    return 0;
}