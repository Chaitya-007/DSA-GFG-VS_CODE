#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    Point p[5];
    for (int i = 0; i < 5; i++)
    {
        p[i].x = i;
        p[i].y = i*10;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<p[i].x<<" "<<p[i].y<<"\n";
    }

    // ! We can assign array position like this
    Point p2 = p[0];
    cout<<p2.x<<" "<<p2.y;
    
      
    return 0;
}