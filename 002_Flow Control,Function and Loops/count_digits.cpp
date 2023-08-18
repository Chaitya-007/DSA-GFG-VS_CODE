#include <iostream>
using namespace std;


int main()
{
    int n = 523;
    int count = 0;

    while (n > 0)
    {
        count++;
        n = n/10;
    }
    cout<<count;
    
    return 0;
}