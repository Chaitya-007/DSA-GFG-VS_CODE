#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    {
    int arr[] = {10,-20,5,30};
    int n = 4;

    sort(arr,arr+n,[](int a,int b) {return abs(a) < abs(b);});

    // for(const auto &x : arr)
    // {
    //     cout<<x<<" ";
    // }
    }

    {
        int arr[] = {10,-20,5,-30};
        int n = 4;
        auto mycmp = [](int x,int y) { return abs(x) < abs(y);};

        sort(arr,arr+n,mycmp);
        for(auto &x: arr)
        {
            cout<<x<<" ";
        }

    }
    

    return 0;
}