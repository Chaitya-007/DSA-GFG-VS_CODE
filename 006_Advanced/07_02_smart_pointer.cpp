#include <iostream>
using namespace std;

class Test
{
    public:
    int x,y;
    Test(int a,int b)
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

int main()
{
    cout<<"Main begins\n";
    {
        Test *p = new Test(10,20);
        delete p;
    }
    cout<<"Main ends\n";
    return 0;
}