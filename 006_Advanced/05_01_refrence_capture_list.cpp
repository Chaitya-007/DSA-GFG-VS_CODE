#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x = 5, y = 10;  
    auto lambda_expr = [&](int a){
        x = x + a;
        y = y + a;
    };

    lambda_expr(20);
    cout<<x<<" "<<y;


    return 0;
}