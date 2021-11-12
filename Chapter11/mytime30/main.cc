#include <iostream>
#include "mytime30.h"
//  计算时间的一个运算符重载例子
int main(void)
{
    using std::cout;
    using std::endl;
    Time aida(3,35);
    Time tosca(2,48);
    Time temp;

    cout << "Aida and Tosca : \n";
    cout << aida << " ; " << tosca << endl;
    temp = aida + tosca; // operator+()
    cout << "Aida + Tosca : " << temp << endl;
    temp = aida * 1.17; // 成员操作符 operator*()
    cout << "Aida * 1.17 : " <<temp << endl;
    cout << " 10.0 * Tosca : " << 10.0 * tosca <<endl;

    return 0;
}