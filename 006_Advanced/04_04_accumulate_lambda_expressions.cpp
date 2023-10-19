#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec {10,2,4,20,1};
    int res = accumulate(vec.begin(),vec.end(),0);
    cout<<res<<"\n";

    res = accumulate(vec.begin(),vec.end(),1,[](int x,int y) {return x*y;});
    cout<<res<<"\n";

    return 0;
}