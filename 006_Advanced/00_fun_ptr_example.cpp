#include <iostream>
using namespace std;

void fun()
{
    cout<<"GFG\n";
}

int fun2(int x,int y)
{
    return (x+y);
}

int main()
{
    void (*fun_ptr)() = fun;
    cout<<fun_ptr<<"\n";
    int (*f_ptr) (int ,int ) = fun2;
    cout<<f_ptr(10,20);

    return 0;
}