#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {10,20,30};

    for_each(vec.begin(),vec.end(),[](int &x) { x = x*2;});

    for_each(vec.begin(),vec.end(),[] (int x) {cout<<x<<" ";});

    return 0;
}