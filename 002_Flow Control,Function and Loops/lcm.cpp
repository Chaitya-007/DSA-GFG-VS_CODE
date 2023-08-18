#include <iostream>
using namespace std;
int main()
{

    // ! LCM(a,b) * GCD(a,b) = Product of numbers(a * b) 
    // ! LCM(a,b) = Product of numbers(a * b)/GCD(a,b)

    int m = 3;
    int n = 7;
    int product = m*n;

    // ! Till m == n
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
    // ! After this the m and n will become equal

    int lcm = product/m;

    cout<<"LCM is "<<lcm;
    

    return 0;
}