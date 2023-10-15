#include <iostream>
using namespace std;

class Test
{
    protected:
    int x;

    public:
    Test(int i):x(i) {}
    void fun() const {cout<<"fun() const"<<endl;}
    void fun() {cout<<"fun"<<endl;}
};

int main()
{
    Test t1(10);
    const Test t2(20);

    t1.fun();
    t2.fun();
    return 0;
}