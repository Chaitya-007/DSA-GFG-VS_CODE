#include <iostream>
using namespace std;

class Test
{
    public:
    int x,y;
    Test(int a = 0,int b = 0)
    {
        x = a;
        y = b;
        cout<<"Constructor Called\n";
    }
    ~Test()
    {
        cout<<"Destructor Called\n";
    }
};

class SP
{
    Test *ptr;
    public:

    SP(Test *p = NULL)
    {
        ptr = p;
    }

    ~SP()
    {
        delete ptr;
    }

    Test &operator *() {return *ptr;}
    Test *operator ->() {return ptr;}
};

int main()
{
    cout<<"Main begins\n";
    {
        Test *p = new Test(10,20);
    }
    cout<<"Main ends\n";
    return 0;
}