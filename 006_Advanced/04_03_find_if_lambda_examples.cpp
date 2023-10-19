#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec {100,20,4,200,1};
    auto it = find_if(vec.begin(),vec.end(),[](int x){ return x<10;});
    cout<<*it;

    return 0;
}