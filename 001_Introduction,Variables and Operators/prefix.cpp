#include <iostream>
using namespace std;
int main()
{
    // !Prefixes
    // !Integer Literals
    int x = 10;
    // !0x => Hexadecimal
    int y = 0x1A;
    // !0 => Octal
    int z = 016;
    // !0b => Binary
    int a = 0b11;

    // ? Printing statements
    cout<<x<<"\n"
        <<y<<"\n"
        <<z<<"\n"
        <<a;
    return 0;
}