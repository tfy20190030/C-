#include<iostream>
using namespace std;
class Base {
public:
    std::string name()
    {
        return baseame;
    }
    virtual void print(ostream &os)  {
        os << baseame;
    }
private:
    std::string baseame="base";
};

class Derived : public Base {
public:
    void print(ostream& os) {
     //   print(os);
        Base::print(os);
        std::cout  << endl;
        os << "i= " << i << std::endl;
    }
private:
    int i=99;
};

class MoreDerived : public Derived {
public:
    // void func() const override { /* ... */ } // ´íÎó£ºÎÞ·¨¸²¸Ç final º¯Êý
};

/*
int main()
{
    Base bobj;
    Derived dobj;
    Base* bp1 = &bobj;
    Base* bp2 = &dobj;
    Base& br1 = bobj;
    Base& br2 = dobj;
    bobj.print(std::cout);//base
    dobj.print(std::cout);//base 99
    bp1->name();//base
    bp2->name();//base
    br1.print(std::cout);//base
    br2.print(std::cout);//base 99
    

}
*/