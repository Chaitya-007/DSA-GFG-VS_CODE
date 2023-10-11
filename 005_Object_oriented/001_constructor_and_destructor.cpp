#include <iostream>
using namespace std;

class Point
{
    private:
    int x,y;

    public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int x1,int y1)
    {
        x = x1;
        y = y1;
    }
    void Print()
    {
        cout<<x<<" "<<y<<"\n";
    }
};



int main()
{
    Point p1,p2(10,20);
    p1.Print();
    p2.Print();
    return 0;
}