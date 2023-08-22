#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3};

    // ! Modifications using for each loop
    for(auto &x: arr)
    {
        x = x+5;
    }

    for(auto y: arr)
    {
        cout<<y<<" ";
    }
    return 0;
}