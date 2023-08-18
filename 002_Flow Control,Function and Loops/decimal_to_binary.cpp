#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 18;
    int rem;
    vector<int>v;

    while (n > 0)
    {
        rem = n%2;
        v.push_back(rem);
        n = n/2;
    }

    cout<<"\n";

    // ! Reversing the vector is done like this => v.end() - 1
    
    /* 
    *for (auto itr = v.end() - 1; itr >= v.begin(); itr--)
    * {
    *    cout<<*itr<<" ";
    * }
    */

    
    // ! Use reverse(v.begin(),v.end())
    reverse(v.begin(),v.end());
    for (auto itr = v.begin(); itr < v.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    
    
    

    return 0;
}