#include<iostream>
using namespace std;
class Base {
public:
    virtual void func() const {
        std::cout << "Base" << endl;/* ... */
    }
};

class Derived : public Base {
public:
    void func() const  {
        std::cout << "Derived" << endl;/* ... */
    } // 覆盖并禁止进一步覆盖
};

class MoreDerived : public Derived {
public:
    // void func() const override { /* ... */ } // 错误：无法覆盖 final 函数
};
/*
int main()
{
    Base* p;
    Derived d;
    p = &d;
    p->Base::func();//该调用将在编译的时候完全解析

}
*/