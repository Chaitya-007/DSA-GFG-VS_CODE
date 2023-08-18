#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    // ! Pattern 1
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<"*"<<" ";
    // }

    // ! Pattern 2
    // for (int i = 1; i <=n; i++)
    // {
    //     cout<<"*\n";
    // }

    // ! Pattern 3
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    
    
    

    return 0;
}