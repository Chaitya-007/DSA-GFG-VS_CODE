#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    Point p = {10,20};
    Point *ptr = &p;
    cout<<ptr->x<<"\n";
    ptr->x = 30;
    cout<<p.x;


    return 0;
}