#include <iostream>
using namespace std;

// ! _ _ *  => i = 1, j = 2
// ! _ * *  => i = 2, j = 1
// ! * * *  => i = 3, j = 0


int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        // ? For printing spaces
        for (int j = 1; j + i <= n; j++)
        {
            cout<<" ";
        }

        // ! For printing stars
    int k = i;
        while (k > 0)
        {
            cout<<"*";
            k--;
        }
        
        cout<<"\n";
    }
    
    return 0;
}