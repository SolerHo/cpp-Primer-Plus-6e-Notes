#include <iostream>
#include <cstring>
#include <new>
using namespace std;
struct chaff
{
    char dross[20];
    int slag;
};

const int BUFFSIZE = 1024;
char buff[BUFFSIZE];

int main(void)
{
    char dross[20];
    int slag;
    chaff *tmp1 = new chaff[20];
    chaff *tmp2 = new(buff) chaff[2];

    for (int i = 0; i < 2;i++)
    {
        cout << "NO "<< i << ": " <<endl;
        cout << "Enter the dross : ";
        cin.getline(dross, 20); //读取输入的传值
        cout << "Enter the slag : ";
        cin >>slag;
        cin.get(); //去除回车

        strcpy(tmp1[i].dross,dross);
        strcpy(tmp2[i].dross,dross);
        tmp1[i].slag = tmp2->slag = slag;
    }
    for (int i = 0;i < 2;i++)
    {
        cout << "The dross is " << tmp1[i].dross << "  The slag is : " << tmp1->slag<<endl;
        cout << "The dross is " << tmp2[i].dross << "  The slag is : " << tmp2->slag<<endl;
    }
    delete [] tmp1; //释放内存，否则会出现内存泄漏
    return 0;
}