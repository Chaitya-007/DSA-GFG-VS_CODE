#include <iostream>
using namespace std;

typedef struct Point 
{
    int x;
    int y;
}P; // ! Here we have created an alias of structure as P

int main()
{
    // ? Instead of using struct Point we can write like this
   P p;
   p.x = 10;
   p.y = 20;
   cout<<p.x<<" "<<p.y; 
    return 0;
}