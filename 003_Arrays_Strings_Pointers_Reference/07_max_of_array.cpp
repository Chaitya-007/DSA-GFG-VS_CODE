#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,5,8,3,89,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int maxo = max(arr[0],arr[1]);
    cout<<maxo;
    

    return 0;
}