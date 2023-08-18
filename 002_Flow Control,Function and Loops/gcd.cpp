#include <iostream>
using namespace std;
int main()
{
    int m = 10;
    int n = 15;

    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
        
    }

    cout<<"GCD is "<<m;
    


    return 0;
}