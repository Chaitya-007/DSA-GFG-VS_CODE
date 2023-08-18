#include <iostream>
#include <typeinfo>
#include <bits/stdc++.h>
using namespace std;

// !Return type as auto
auto asach(int x,int y)
{
    int sum;
    sum = x + y;
    return sum;
}

int main()
{
    // ?Here we have used auto keyword
    // todo here we have to initialize always the auto keyword to use it
    auto x = 10;
    auto y = 15.5;
    auto z = 2.3f;
    auto s = 'a';
    auto w = 52l;
    auto u = 63ll;
    auto p = 12u;
    auto q = 123ul;
    auto r = 12l;
    auto e = 12ll; //! This gives different output for w and e, the reason I don't know
    auto t = 12ull;


    // ?Here we have used typeid() and name() from typeinfo
    cout<<typeid(x).name()<<"\n";
    cout<<typeid(y).name()<<endl;
    cout<<typeid(z).name()<<endl;
    cout<<typeid(s).name()<<endl;
    cout<<typeid(w).name()<<endl;
    cout<<typeid(u).name()<<endl;
    cout<<typeid(p).name()<<endl;
    cout<<typeid(q).name()<<endl;
    cout<<typeid(r).name()<<endl;
    cout<<typeid(s).name()<<endl;
    cout<<typeid(t).name()<<endl;

    // !Calling funtion having auto as return type
    auto sum = asach(5,3);
    cout<<sum<<endl;

    // ?We usually follow this
    vector<int> v = {1,2,3};
    vector<int>:: iterator i;
    for (i = v.begin(); i < v.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";

    // todo We can also follow this
    vector<int> v2 = {3,4,5};
    for (auto i = v2.begin(); i < v2.end(); i++)
    {
        cout<<*i<<" ";
    }
    
    

    return 0;
}

