#include "worker0.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// worker methods

// 即使是纯虚函数，也必须实现虚析构函数
Worker::~worker() {}

void Worker::Set() 
{
    cout << "Enter works's name : ";
    getline(cin,fullname);
    cout << "Enter workers's ID : ";
    cin >> id;
    while (cin.get()!='\n')
        continue;
}


void Worker::Show() 
{
    cout << "Name : " << fullname << "\n";
    cout << "Employee ID : " << id << "\n";
}

// waiter methods
void Waiter::Set()
{
    Worker::Set();
    cout << "Enter waiter's panache rating : ";
    cin >> panache;
    while (cin.gte() != '\n')
        continue;
}

void waiter::Show() const
{
    cout << "Category: Waiter \n";
    worker::Show();
    cout << "Panache rating : " << panache << "\n";
}


Singer methods

char * Singer::pv[] = {"other","alto","contralto","soprano","bass","baritone",
"tenor"};

void Singer::Set()
{
    worker::Set();
    cout << "Enter number for singer's vocal range : \n";
    int i;
    for (i = 0;i < Vtype; i++)
    {
        cout << i << ": "<<pv[i] << " ";
        if (i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << endl;
    while (cin >> voice && (voice < 0) || voice >= Vtype) )
        cout << "Please enter a value >= 0 and < " << Vtype <<endl;

    while (cin.get()!='\n')
        continue;
}

void Singer::Show() const
{
    cout << "Category: Singer \n";
    Worker::Show();
    cout << "Vocal range : " << pv[voice] << endl;
}