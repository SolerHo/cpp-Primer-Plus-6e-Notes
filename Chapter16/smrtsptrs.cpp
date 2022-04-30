#include <iostream>
#include <memory>
#include <cstring>

class Report
{
    private:
        std::string str;
    public:
        Report (const std::string s) : str(s)
                {std::cout << "Object Created !\n";}
        ~Report() {std::cout << "Obejct deleted !\n"; }
        void comment() const {std::cout << str << "\n";}
};

int main()
{
    {
        std::auto_ptr<Report> ps (new Report("using auto_ptr"));
        ps->comment(); // 使用 -> 来引入function member
    }
    {
        std::shared_ptr<Report> ps (new Report("using shared_ptr"));
        ps->comment();
    }
    {
        std::unique_ptr<Report> ps (new Report("using unique_ptr"));
        ps->comment();
    }
    return 0;
}


