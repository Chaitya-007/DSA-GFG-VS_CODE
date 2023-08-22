#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);


    // ! int sum = accumulate(arr,arr+n,0);
    int sum = 0;
    
    cout<<accumulate(arr,arr+n,sum);
    return 0;
}