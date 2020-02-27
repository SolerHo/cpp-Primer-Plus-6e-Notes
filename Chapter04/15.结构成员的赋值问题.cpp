/********************************************************************
 * 
 * Date : 2020 - 02 - 27
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FOUR
 * 
 * description :  结构成员的赋值问题
 * 
 * 
 ********************************************************************/

#include<iostream>

using namespace std;

struct inflatable
{
    /*也可以使用string对象方式，如果要使用string对象，就需要使用string头文件。
    * 要让结构定义能够访问名称空间std，或者是将变量的类型声明为std::string。
    */
    char name[20];  // string name
    float volume;
    double price;
};

/*成员赋值（memberwise assignment）
*可以使用赋值运算符（=）将结构赋另一个同类型的结构。这样结构中的每个成员都将被设置为另一个结构中相应成员的值。即使成员是数组。这种方式就是成员赋值。
*/

int main()
{
    inflatable bouquet = 
    {
        "Sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout<<"Bouquet: "<<bouquet.name<<" for $";
    cout<<bouquet.price<<endl;

    choice = bouquet; // 赋值一个结构给另一个结构。
    cout<<"choice : "<<choice.name<< " for $";
    cout<<choice.price<<endl;

    return 0;

}

/* 同时定义结构和创建结构变量的问题，只需要将变量名放在结束括号的后面即可。
* 
* 一般格式：
* struct perks
* {
*       int key_number;
*       char name[20];
*       int age;
* }Mr_Jason = 
* {
*        001,
*        "Jason"
*         24
* };
*
*/
