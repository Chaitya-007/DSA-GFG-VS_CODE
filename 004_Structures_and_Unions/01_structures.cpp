#include <iostream>
using namespace std;

struct Point 
{
    int x;
    int y;
};

int main()
{
    struct Point p;
    p.x = 10;
    p.y = 20;
    cout<<p.x<<" "<<p.y<<endl;  

    {
        // ! Other way of writing structures
        Point q;
        q.x = 10;
        q.y = 20;
        cout<<q.x<<" "<<q.y;
    }
    return 0;
}