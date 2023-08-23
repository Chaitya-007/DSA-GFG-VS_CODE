#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    // ! Best Way to sum the array
    // ! int sum = accumulate(arr,arr+n,0);
    // ! cout<<sum; => 21

    
    /*
    * This gives incorrect output
    int sum = 0;
    accumulate(arr,arr+n,sum);

    cout<<sum; => 0
    */
    
    return 0;
}