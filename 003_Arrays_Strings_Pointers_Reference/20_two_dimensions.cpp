#include <iostream>
#include <vector>
using namespace std;
int main()
{
    {
        // ! Dynamically sized arrays
    int m = 3,n = 2;
    // ? This is will give compile error
    // int *arr;
    // arr = new int *[m];

    // ? This will also give compile error
    // int **arr;
    // arr = new int [m];
    
    // ! Use this syntax
    int **arr;
    arr = new int *[m];

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int [n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 10;
            cout<<arr[i][j]<<" ";
        }
        
    }
    }

    // {
    //     // ! Array of Pointers
    //     int m = 3, n = 2;
    //     int *arr[m];
    //     for (int i = 0; i < m; i++)
    //     {
    //         arr[i] = new int [n];
    //     }
    //     int x = 1;
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             arr[i][j] = x;
    //             x++;
    //             cout<<arr[i][j]<<" "; 
    //         }
    //         cout<<"\n";
    //     }
    // }

    // {
    //     // ! Array of vectors
    //     int m = 3, n  = 2;
    //     int x = 1;
    //     vector<int>arr[m];
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             arr[i].push_back(x);
    //             x++;
    //         }
    //     }

    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cout<<arr[i][j]<<" ";
    //         }
    //         cout<<"\n";
    //     }
        
        
    // }

    // {
    //     // ! Vectors of vectors
    //     int m = 3 , n = 2;
    //     int x = 1;
    //     vector<vector<int>>arr;
    //     for (int i = 0; i < m; i++)
    //     {
    //         vector<int>v;
    //         for (int j = 0; j < n; j++)
    //         {
    //             v.push_back(x);
    //             x++;
    //         }
    //         arr.push_back(v);
    //     }

    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cout<<arr[i][j]<<" ";
    //         }
    //        cout<<"\n"; 
    //     }
        
        
    // }
    
    
    
    return 0;
}