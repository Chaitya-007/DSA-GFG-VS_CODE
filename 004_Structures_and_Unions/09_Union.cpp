#include <iostream>
using namespace std;

union test
{
    int x;
    int y;
};


int main()
{
    cout<<sizeof(test)<<"\n";
    union test t;
    t.x = 10;
    cout<<t.x<<" "<<t.y<<"\n";
    t.y = 20;
    cout<<t.x<<" "<<t.y;
    return 0;
}