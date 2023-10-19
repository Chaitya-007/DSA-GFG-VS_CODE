#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool compare(int x,int y)
{
    return abs(x) < abs(y);
}


int main()
{
    int arr[] = {2,4,-1,8,-9};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n,compare);
    for(const auto &x : arr)
    {
        cout<<x<<" ";
    }


    return 0;
}