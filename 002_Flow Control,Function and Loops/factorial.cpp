#include <iostream>
using namespace std;
int main()
{
    // ! Finding factorial of a number
    int n = 5;
    int fact = 1;

    for (int i = 1; i <=n; i++)
    {
        fact = fact*i;
    }

    cout<<fact;
    
    return 0;
}