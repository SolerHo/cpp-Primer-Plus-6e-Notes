#include <iostream>
#include "golf.h"
using namespace std;

const int SIZE = 2;

int main(void)
{
    golf g[SIZE];
    int count = 0;
    cout << "please input the infor of golf : "<<endl;
    while ((count < SIZE) && (setgolf(g[count])))
    {
        cout << "please input next infor : "<<endl;
        count++;
    }
    cout << "all golf infor : "<<endl;
    for(int i = 0;i < count;i++)
    {
        showgolf(g[i]);
    }
    return 0;
}