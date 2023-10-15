#include <iostream>
using namespace std;

class Base
{
    protected:
    int a;
    public:
    Base() : a(0) {}
};

class Derived1 : public Base 
{
    public:
    int c;
};

class Derived2 : public Base
{
    public:
    int c;
};

class Derived3 : public Derived1, public Derived2
{
    public:
    void show(){cout<<a;}
};

int main()
{
    Derived3 d;
    d.show();
    return 0;
}