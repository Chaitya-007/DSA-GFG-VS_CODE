#include <iostream>
using namespace std;

// ! Base class members cannot be accessed directly using initializers list
// ! for this Base class constructors needs to be called

class Base
{
    public:
    int x,y;
    public:
    Base(int i,int j)
    {
        x = i;
        y = j;
    }
};

class Derived:public Base 
{
    public:
    Derived(int i,int j): x(i),y(j) {}
    void print() {cout<<x<<""<<y;}
};

int main()
{
    Derived q(10,10);
    q.print();
    return 0;
}