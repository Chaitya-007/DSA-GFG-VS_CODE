#include <iostream>
using namespace std;

void fun(int *p)
{
    *p = *p + 5;
}

void fun(string *s)
{
    cout<<*s;
}

int main()
{
    int x = 10;
    fun(&x);
    cout<<x<<"\n";

    string s = "geeksforgeeks";
    fun(&s);


    return 0;
}