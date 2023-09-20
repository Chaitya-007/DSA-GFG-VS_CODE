#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "gfg";
    cout<<str.length()<<"\n";
    str = str + "xyz";
    cout<<str<<"\n";
    cout<<str.substr(1,3)<<"\n";
    cout<<str.find("gf")<<"\n";
    cout<<str.substr(1)<<"\n";
    return 0;
}