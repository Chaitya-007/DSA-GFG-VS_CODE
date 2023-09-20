#include <iostream>
using namespace std;
int main()
{
    int m = 2, n = 2, p = 2;
    int matA[m][n];
    int matB[n][p];
    int matC[m][p];

    cout<<"Enter the details of matrix A\n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matA[i][j];
        }
        
    }
    
    cout<<"Matrix A has entries\n";

    for(const auto &x:matA)
    {
        for(const auto &y:x)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
    }

    cout<<"Enter the details of matrix B\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin>>matB[i][j];
        }
        
    }
    
    cout<<"Matrix B has entries\n";

    for(const auto &x:matB)
    {
        for(const auto &y:x)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            matC[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                matC[i][j] = matC[i][j] + (matA[i][k]*matB[k][j]);
            }
            
        }
        
    }

    cout<<"Matrix C equals to\n";
    // for(auto &a:matC)
    // {
    //     for(auto &b: a)
    //     {
    //         cout<<b<<" ";
    //     }
    //     cout<<"\n";
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<matC[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}