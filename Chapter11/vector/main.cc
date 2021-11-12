#include <iostream>
#include <cstdlib> //提供rand() 和 srand() 原型
#include <ctime> //time() 原型
#include "vector.h"

int main(void)
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0)); //随机数生成器
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit) : ";
    while (cin >> target)
    {
        cout << "Enter step length : ";
        if (!(cin >> dstep))
            break;
        while(result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep,direction,Vector::POL);
            result = result + step;
            steps ++;
        }
        cout << "After " << steps << " steps , the subject "
            "has the following location : \n";
        cout << result << endl;
        result.polar_mode();
        cout << "or \n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval() / steps <<endl;
        steps = 0;
        result.reset(0.0,0.0);
        cout << "Enter target distance (q to quit) : ";
    }
    cout << "bye !!\n";
    cin.clear();
    while(cin.get() !='\n')
        continue;
    return 0l;
}