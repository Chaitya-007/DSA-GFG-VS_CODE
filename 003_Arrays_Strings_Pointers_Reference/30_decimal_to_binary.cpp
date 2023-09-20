#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int num = 6;
    int rem;
    string res;
    string temp;
    while(num>0)
    {
        rem = num%2;
        num = num/2;
        temp = to_string(rem);
        res = res + temp;
    }
    int left = 0;
    int right = res.length() - 1;
    while (left < right)
    {
        char temp = res[left];
        res[left] = res[right];
        res[right] = temp;
        left++;
        right--;
    }
    cout<<res;
    
    return 0;
}