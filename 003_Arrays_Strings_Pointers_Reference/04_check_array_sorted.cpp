#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,24,2};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int flag = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i]<=arr[i+1])
        {
            
        }
        else
        {
            flag = 2;
            cout<<"not sorted";
            break;
        }
        
    }
    if (flag == 1)
    {
        cout<<"sorted";
    }
    
    
    
    




    return 0;
}