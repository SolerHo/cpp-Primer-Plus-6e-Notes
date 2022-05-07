#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

void outint(int n) {std:: << n << " ";}

int main()
{
    using namespace std;
    list<int> one(5,2);
    int stuff[5] = {1,2,4,8,6};
    list<int> two;
    two.insert(two.begin(),stuff,stuff + 5);
    int more[6] = {6,4,2,4,6,5};
    list<int> three(two);
    three.insert(three.end(),more,more + 6); // 将more的元素插入到three的末尾，并扩大长度

    cout << " List One : ";
    for_each(one.begin(),one.end(),outint);
    cout << endl << " List Two : ";
    for_each(two.begin(),two.end(),outint);
    // insert() 和 splice()的区别
    // insert() 将原始区间的副本插入到目标地址
    // splice() 将原始区间移到目标地址
    three.splice(three.begin(),one); // 将one的元素插入到 three的开头
    cout << endl << "List Three after splice : ";
    for_each(three.begin(),three.end,outint);
    cout << endl << "List One : ";
    for_each(one.begin(),one.end(),outint);
    three.unique(); // 将连续相同的元素压缩为单个元素
    cout << endl << " List three after unique : ";
    for_each(three.begin(),three.end(),outint);
    three.sort(); // 使用 < 运算符对链表进行排序
    three.unique();
    cout << endl << " List Three after sort & unique : ";
    for_each(three.begin(),three.end(),outint);
    two.sort();
    three.mere(two);
    cout << endl << "Sorted two merged into threee : ";
    for_each(three.begin(),three.end(),outint);
    cout << endl;

    return 0;
}