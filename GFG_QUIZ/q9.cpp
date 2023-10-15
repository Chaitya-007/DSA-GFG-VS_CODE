#include <iostream>
using namespace std;

int fun(int x = 0, int y = 0, int z)
{
    return (x+y+z);
}

int main()
{
    cout<<fun(10);
    return 0;
}