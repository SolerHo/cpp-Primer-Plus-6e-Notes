
// stdmove.cpp using std::move()
#include <iostream>
#include <utility>

// interface
class Useless
{
    private:
        int n;
        char *pc;
        static int ct;
        void ShowObject() const;
    public:
        Useless();
        explicit Useless(int k);
        Useless(int k,char ch);
        Useless(const Useless & f); // 常规复制构造器
        Useless(Useless && f);
        ~Useless();
        Useless operator+(const Useless & f) const;
        Useless & operator=(const Useless & f); // 复制赋值
        Useless & operator=(Useless && f); // 移动赋值
        void ShowData() const;
};

// 实现
int Useless::ct = 0;

Useless::Useless()
{
    ct++;
    n = 0;
    pc = nullptr;
}

Useless::Useless(int k) : n(k)
{
    ++ct;
    pc = new char[n];
}

Useless::Useless(int k,char ch) : n(k)
{
    ++ct;
    pc = new char [n];
    for (int i = 0; i < n ; i++)
        pc[i] = ch;
}

Useless::Useless(const Useless & f) : n(f.n)
{
    ++ct;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = f.pc[i];
}

Useless::Useless(Useless && f) : n(f.n)
{
    ++ct;
    pc = f.pc; // steal address
    f.pc = nullptr; // 给原对象设置为返回为空
    f.n = 0;
}

Useless::~Useless()
{
    delete [] pc;
}

Useless & Useless::operator=(const Useless & f) // 复制赋值
{
    std::cout << "copy assignment operator called : \n";
    if (this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = f.pc[i];
    return *this;
}

Useless & Useless::operator=(Useless && f) // move 赋值
{
    std::cout << " move assignment operator called : \n";
    if (this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = f.pc;
    f.n = 0;
    f.pc = nullptr;
    return *this;
}

Useless Useless::operator+(const Useless & f) const
{
    Useless temp = Useless(n + f.n);
    for (int i = 0; i < n; i++)
        temp.pc[i] = pc[i];
    for (int i = n; i < temp.n; i++)
        temp.pc[i] = f.pc[i - n];
    return temp;
}

void Useless::ShowObject() const
{
    std::cout << "Number of elements : " << n;
    std::cout << " Data Address : " << (void *) pc <<std::endl;
}

void Useless::ShowData() const
{
    if (n == 0)
        std::cout << "(obejct empty)";
    else
        for (int i = 0; i < n; i++)
            std::cout << pc[i];
    std::cout << std::endl;
}

// application

int main()
{
    using std::cout;
    {
        Useless one(10,'x');
        Useless two = one  +one; // 调用 move构造函数
        cout << "Obejct one: ";
        one.ShowData();
        cout << "Object two: ";
        two.ShowData();
        Useless three, four;
        cout << "Three  = one \n";
        three = one; // 自动复制赋值
        cout << "now object three = ";
        three.ShowData();
        cout << "and object one = ";
        one.ShowData();
        cout << "four = one + two \n";
        four = one + two;
        cout << "now object four = ";
        four.ShowData();
        cout << "four = move(one) \n";
        four = std::move(one); // 强制移动赋值
        cout << "now object four = ";
        four.ShowData();
        cout << "and object one = ";
        one.ShowData();
    }
}

