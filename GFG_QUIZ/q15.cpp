#include <iostream>
using namespace std;

class Base
{
    public:
    virtual string print() const 
    {
        return "This is Base class";
    }
};

class Derived: public Base 
{
    public:
    virtual string print() const 
    {
        return "This is Derived class";
    }
};

void describe(Base p)
{
    cout<<p.print()<<endl;
}

int main()
{
    Base b;
    Derived d;
    describe(b);
    describe(d);
    return 0;
}