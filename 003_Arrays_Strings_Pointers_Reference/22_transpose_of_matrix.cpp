#include <iostream>
#include <vector>
using namespace std;
int main()
{
    

    // {
    //     // ! Transpose using 2D array
    //     int m = 3, n = 3;
    // int arr[m][n];
    // cout<<"Enter number of elements in array\n";
    // for (int i = 0; i < m; i++)
    // {
    //     cout<<"Enter elements for the "<< i + 1 <<" row :\n";
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // }

    // cout<<"\nDisplaying the 2D matrix :\n";
    // for(const auto &x: arr)
    // {
    //     for(const auto y : x)
    //     {
    //         cout<<y<<" ";
    //     }
    //     cout<<"\n";
    // }

    // cout<<"Taking transpose of matrix\n";
    
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i < j)
    //         {
    //              int temp = arr[i][j];
    //              arr[i][j] = arr[j][i];
    //              arr[j][i] = temp;
    //         }
            
    //     }
        
    // }

    // cout<<"\nDisplaying the 2D matrix after taking transpose :\n";
    // for(const auto &x: arr)
    // {
    //     for(const auto y : x)
    //     {
    //         cout<<y<<" ";
    //     }
    //     cout<<"\n";
    // }
    // }

    // {
    //     // ! Transpose using 2D vector
    //     int m = 3, n = 3;
    //     vector<vector<int>>mat(m ,vector<int> (n));
    //     cout<<"Enter elements for matrix\n";
    //     for(int i = 0; i < m; i++)
    //     {
    //         vector<int>v;
    //         for (int j = 0; j < n; j++)
    //         {
    //             int x;
    //             cin>>x;
    //             mat[i][j] = x;
    //         }
            
    //     }

    //     for(const auto &itr : mat)
    //     {
    //         for(const auto &x : itr)
    //         {
    //             cout<<x<<" ";
    //         }
    //         cout<<"\n";
    //     }

    //     cout<<"After taking transpose\n";
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             if (i < j)
    //             {
    //                 int temp = mat[i][j];
    //                 mat[i][j] = mat[j][i];
    //                 mat[j][i] = temp;
    //             }
                
    //         }
            
    //     }

    //     for(const auto &itr : mat)
    //     {
    //         for(const auto &x : itr)
    //         {
    //             cout<<x<<" ";
    //         }
    //         cout<<"\n";
    //     }

    // }

    {
        // ! a small improvement for creatiing transpose of matrix
        int m,n;
        cout<<"Enter number of rows\n";
        cin>>m;
        cout<<"Enter number of columns\n";
        cin>>n;
        int mat_a[m][n];
        int mat_b[n][m];

        cout<<"Enter the elements of matrix\n";

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>mat_a[i][j];
            }
            
        }

        for(const auto &x : mat_a)
        {
            for(const auto &y : x)
            {
                cout<<y<<" ";
            }
            cout<<"\n";
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mat_b[i][j] = mat_a[j][i];
            }
            
        }
        
        cout<<"After taking transpose\n";
        for(const auto &x : mat_b)
        {
            for(const auto &y : x)
            {
                cout<<y<<" ";
            }
            cout<<"\n";
        }

        
    }

    
    return 0;
}