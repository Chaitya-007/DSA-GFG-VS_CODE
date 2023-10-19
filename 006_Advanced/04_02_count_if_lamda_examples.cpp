#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec {10,5,3,20,100};
    int res = count_if(vec.begin(),vec.end(),[](int x) {return x>=10;});
    cout<<res;


    return 0;
}