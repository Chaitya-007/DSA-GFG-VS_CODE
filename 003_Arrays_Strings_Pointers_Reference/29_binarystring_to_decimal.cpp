#include <iostream>
#include <string>
using namespace std;
int main()
{
    {
    // string str = "1010";
    // int num = stoi(str);
    // int x = 1;
    // int rem;
    // int res = 0;
    // while (num>0)
    // {
    //     rem = num%10;
    //     res = res + rem*x;
    //     x = x*2;
    //     num = num/10;
    // }
    // cout<<res;
    }

    {
        string str = "1010";
        int sum = 0;
        int x = 1;
        int n = str.length();
        for (int i = 0; i < n; i++)
        {
            sum = sum + ((static_cast<int>(str[(n-1) - i]) - 48)*x);
            x = x*2;
        }
        cout<<sum;
        
    }
    
    
    return 0;
}