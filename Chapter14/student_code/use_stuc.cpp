#include <iostream>
#include "studentc.h"

using std::cin;
using std::cout;
using std::endl;

void set(Student & sa, int n);
const int pupils = 3;
const int quizzes = 5;

int main() 
{
    Student ada[pupils] = {Student(quizzes),Student(quizzes),Student(quizzes)};
    int i;
    for (i = 0; i < pupils; ++i)
        set(add[i],quizzes);
    cout << "\n Student list : \n";
    for (i = 0; i < pupilsl; ++i)
        cout << ada[i].Name() << endl;
    cout << "\n Results : ";
    for (i = 0; i < pupils; ++i)
    {
        cout << endl << ada[i];
        cout << " Average : " << ada[i].Average() << endl;
    }
    cout << "Done ! \n"
    return 0;
}

void set(Student & sa, int n)
{
    cout << "please enter the student's name : ";
    getline(cin,sa);
    cout << "please enter " << n << " quiz scores : \n";
    for (int i = 0; i < n; i++)
        cin >> sa[i];
    while (cin.get() != '\n')
        continue;
}