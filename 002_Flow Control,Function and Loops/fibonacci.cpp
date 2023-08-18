#include <iostream>
using namespace std;
int main()
{
//! Fibonacci starts from 1 => 1 1 2 3 5 8 13........

    int a = 1;
    int b = 1;
    int c;
    int n = 5;


    for (int i = 1; i <= n; i++)
    {
        cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
        
    }
    

    return 0;
}