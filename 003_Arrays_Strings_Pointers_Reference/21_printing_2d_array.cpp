#include <iostream>
#include <vector>
using namespace std;

void print(int **arr,int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }
    
}

void print(int **arr,int m ,int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 2*i;
        }
        
    }
    
}

    void print(vector<int>arr[],int m)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
        
    }

    void print(vector<vector<int>>&arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
            
        }
        
    }


int main()
{
    {
         // ! Paasing array of pointer using double pointer
       int m = 3, n = 2;
       int **arr;
       arr = new int *[m];

       for (int i = 0; i < m; i++)
       {
        arr[i] = new int [n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i;
        }
        
       }
       print(arr,m,n);
        
    }

    {
        // ! Paasing array of pointers
        int m = 3, n = 2;
        int *arr[m];
        for (int i = 0; i < m; i++)
        {
            arr[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
               arr[i][j] = i;
            }
            
        }
        print(arr,m,n);
        cout<<"\n";

        for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }
        
    }

    {
        // ! Paasing array of vectors
        int m = 3, n = 2;
        vector<int>arr[m];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i].push_back(i);
            }
        }
        print(arr,m);
        
    }


    {
        // ! Passing vectors of vectors
        int m = 3, n = 2;
        vector<vector<int>>arr;
        for (int i = 0; i < m; i++)
        {
            vector<int>v;
            for (int j = 0; j < n; j++)
            {
                v.push_back(i);
            }
            arr.push_back(v);
        }
        print(arr);
    }
    return 0;
}