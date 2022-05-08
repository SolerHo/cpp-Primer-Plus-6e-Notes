// 使用setf的第二个版本：两个参数的控制符

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    // use left justification, show the plus sign, show trailing
    // zeros,with a precision of 3
    cout.setf(ios_base::left, ios_base::adjustfield); // 左对齐
    cout.setf(ios_base::showpos); // 在正数前面加上 +
    cout.setf(ios_base::showpoint); // 显示末尾的小数点
    cout.precision(3); // 精度为3位

    // use e-notation and save old format setting
    // 存储一个变量，方便可以重置回原来的变量控制格式
    ios_base::fmtflags old = cout.setf(ios_base::scientific,ios_base::floatfield);
    cout << "Left Justification : \n";
    long n;
    for (n = 1; n <= 41; n += 10)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }
    // change to internal justification
    cout.setf(ios_base::internal, ios_base::adjustfield); // 符号或者基数前缀左对齐，值右对齐
    // restore default floating point display styles
    cout.setf(old,ios_base::floatfield);

    cout << "Internal Justification : \n";
    for (n = 1; n <= 41; n += 10)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }

    // use right justification, fixed notation
    cout.setf(ios_base::right,ios_base::adjustfield); // 使用右对齐
    cout.setf(ios_base::fixed,ios_base::floatfield); // 使用定点计数法
    cout << "Right justification : \n";
    for (n = 1;n <= 41; n += 10)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }
    return 0;
}