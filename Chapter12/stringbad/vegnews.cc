// vegnews.cc ------ 在类中使用new和delete
#include <iostream>
using std::cout;
#include "stringbad.h"
void callme1(StringBad &); // 传递引用
void callme2(StringBad); // 传递值

int main(void)
{
    using std::endl;
    {
        cout << "Starting an inner block .\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lecture Prey");
        StringBad sports("Spanach Leaves Bowl for Dollars");
        cout << "headline1 : "<< headline1 << endl;
        cout << "headline2 : "<< headline2 << endl;
        cout << "sports : " << sports << endl;
        callme1(headline1);
        cout << "headline1 : " << headline1 << endl;
        callme2(headline2);
        cout << "headline2 : " << headline2 << endl;
        cout << "initialize one object to another : \n";
        StringBad sailor = sports;
        cout << "sailor : " << sailor << endl;
        cout << "Assign one object to another : \n";
        StringBad knot;
        cout << "knot : "<< knot << endl;
        cout << "Exiting the block .ln";
    }
    cout << "End of main() \n";
    return 0;
}
// 按引用传递对象，可节省调用构造函数的时间以及存储新对象的空间。
void callme1(StringBad & rsb)
{
    cout << "String passed by reference : \n";
    cout << "    \"" << rsb << "\"\n";
}

// 按值传递：隐式调用复制构造函数，生成类的一个临时对象。
// 按值传递可以防止原始的参数被修改，但实际函数已使得原始字符串无法被识别，导致显示一些非标准字符。
void callme2(StringBad sb)
{
    cout << "String passed by value : \n";
    cout << "    \"" << sb << "\"\n";
}