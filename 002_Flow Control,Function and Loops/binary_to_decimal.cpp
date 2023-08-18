#include <iostream>
using namespace std;
int main()
{
    int bin = 101;
    int rem,x = 1;
    int dec = 0;

    while (bin > 0)
    {
        rem = bin%10;
        // ! Initially dec = 0 + 1*1 = 1
        // ! afterwards dec = 1 + 0*2 = 1 + 0 = 1
        // ! afterwards dec = 1 + 1*4 = 1 + 4 = 5
        dec = dec + rem*x;
        // ! Initially x = 1
        // ! then x = 1*2 = 2
        // ! then x = 2*2 = 4
        x = x*2;
        bin = bin/10;

    }
    cout<<dec;
    

    return 0;
}