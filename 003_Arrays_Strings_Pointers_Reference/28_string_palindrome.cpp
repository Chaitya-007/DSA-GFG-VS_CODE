#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "nitin";
    string rev = str;
    int n = str.length();
    for (int i = 0; i < n/2; i++)
    {
        char temp = rev[i];
        rev[i] = rev[(n-1) - i];
        rev[(n-1)-i] = temp;
    }

    if (str == rev)
    {
        cout<<"palindrome\n";
    }
    else
    {
        cout<<"not palindrome\n";
    }
    
    
    return 0;
}