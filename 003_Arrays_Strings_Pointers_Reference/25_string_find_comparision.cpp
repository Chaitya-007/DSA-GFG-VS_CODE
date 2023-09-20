#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "geeksforgeeks";
    int res = str.find("xyz");
    if (res == string::npos)
    {
        cout<<res<<"\n";
        cout<<string::npos<<"\n";
        cout<<"object not found\n";
    }
    else
    {
        cout<<"object found at index "<<res<<"\n";
    }

    string s1 = "axc";
    string s2 = "x";
    if (s1<s2)
    {
        cout<<"s2 is greater\n";
    }
    else
    {
        cout<<"s1 is greater\n";
    }
    
    
    
    return 0;
}