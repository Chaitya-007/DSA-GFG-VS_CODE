#include <iostream>
using namespace std;

// ! Go on dividing by 10 and store reminder each time
int first_digit(int n)
{
    int res;
    while (n > 0)
    {
        res = n%10;
        n = n/10;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<first_digit(n);
    return 0;
}