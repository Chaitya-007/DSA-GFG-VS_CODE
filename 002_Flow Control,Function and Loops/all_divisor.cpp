#include <iostream>
using namespace std;
int main()
{
    // ! All divisors of number
    int n = 11;
    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            cout<<i<<" ";
        }
        
    }
    
    return 0;
}