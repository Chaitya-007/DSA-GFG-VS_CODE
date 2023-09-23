#include <iostream>
using namespace std;

union test
{
    int x;
    float y;
};

union test2
{
    int x;
    char bin[4];
};



int main()
{
    test t;
    t.y = 1.1;
    cout<<t.x<<"\n";


    test2 p;
    p.x = 512;
    cout<<(int)p.bin[0]<<" "<<(int)p.bin[1]<<" "<<(int)p.bin[2]<<" "<<(int)p.bin[3];
    return 0;
}