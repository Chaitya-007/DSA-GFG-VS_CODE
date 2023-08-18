#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=10; i++)
    {
        if (i%3 == 0)
        {
            continue;
        }
        cout<<i<<" ";
        
    }

    cout<<"\n";

    for (int i = 1; i <=7; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout<<i<<" ";
    }
    
    
    return 0;
}