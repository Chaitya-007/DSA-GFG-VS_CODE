#include <iostream>
using namespace std;


int getMax(int ,int );

int main()
{
    int a = 10,b = 20;
    cout<<getMax(a,b);
    return 0;
}

int getMax(int a,int b)
{
    int res = max(a,b);
    return res;
}