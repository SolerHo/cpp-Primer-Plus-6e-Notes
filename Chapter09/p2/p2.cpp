#include <iostream>
#include <string>

//const int ArSize = 10;
void strcount(const std::string str);

int main(void)
{
    using namespace std;
    string input;
    char next;
    cout << "Enter a line \n";
    getline(cin, input); //将获取到的值放到input中
    while(input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit): \n";
        getline(cin, input);
    }
    cout << "Bye \n";
    return 0;
}
//使用std::string 的原因是我的namespace std是局部，而非全局
void strcount(const std::string str) 
{
    using namespace std;
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    count = str.size();
    total += count;
    cout << "count = " << count << " characters \n";
    cout << "total = " << total << " characters total \n";

}