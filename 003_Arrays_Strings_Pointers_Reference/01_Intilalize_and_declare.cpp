#include <iostream>
using namespace std;
int main()
{
    int a[5]{2,3,4}; //! Equvivalent to int a[5] = {2,3,4};
    int x{2};  // ! Equvivalent to int x = 2;
    cout<<x<<"\n";

    for(auto x: a)
    {
        cout<<x<<" ";
    }

    return 0;
}