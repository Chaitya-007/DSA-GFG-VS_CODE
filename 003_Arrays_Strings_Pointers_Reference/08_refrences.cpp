#include <iostream>
using namespace std;
int main()
{
    int x = 10,z = 20;
    int &y = x;

    y = z; // ! here y bcomes 20 and then x bcomes 20
    y = y + 5; // ! y bcomes 25

    cout<<x<<" "<<y<<" "<<z;

    return 0;
}