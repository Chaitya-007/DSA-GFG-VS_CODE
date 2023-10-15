#include <iostream>
using namespace std;

class Base
{
    public:
    void show()
    {
        cout<<"\n Base";
    }
};

class Derived: public Base 
{
    public:
    int x;
    Derived() : x(10)
    {}
    void show() {cout<<"\nDerived";}
};

int main()
{
    Base *bp;
    Derived d;
    bp = &d;
    bp->show();
    cout<<bp->x;
    return 0;
}