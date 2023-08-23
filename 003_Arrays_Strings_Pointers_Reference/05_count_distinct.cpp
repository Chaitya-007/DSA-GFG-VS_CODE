#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,20,10,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    int flag = 1;

    // ! Compare each element with previous elements 
    // ! If found equal then don't increment count and break directly
    // ! if none element found equal then increment counter

    for (int i = 0; i < n; i++)
    {
        flag = 1;
       for (int j = 0; j < i; j++)
       {
            if (arr[i] == arr[j])
            {
                flag = 2;
                break;
            } 
       }
       if (flag == 1)
       {
        count++;
       }
        
    }

    cout<<count;
    
    return 0;
}