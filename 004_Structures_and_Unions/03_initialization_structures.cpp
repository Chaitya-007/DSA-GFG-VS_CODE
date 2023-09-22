#include <iostream>
using namespace std;

struct student
{
    int rollNo;
    string name;
    string address;
};

struct Point 
{
    int x;
    int y;
}

int main()
{
    {
        // ! you have to be always in order 
    struct student p = {10,"chaitya","pqr"};
    cout<<p.name<<" "<<p.rollNo<<" "<<p.address<<"\n";
    }
    

    {
        // ! => gives error
//*  struct student q = {"chaitya",10,"pqr"};
//*  cout<<q.name<<" "<<q.rollNo<<" "<<q.address;
    }

    {
        // ! designated initializers
    struct Point s1 = {.y = 10, .x = 20};
    cout<<s1.x<<" "<<s1.y<<"\n";
    }
    
    return 0;
}