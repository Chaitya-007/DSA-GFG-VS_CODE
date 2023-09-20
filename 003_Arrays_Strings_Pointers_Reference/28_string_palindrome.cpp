#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    {
    // string str = "nitin";
    // string rev = str;
    // int n = str.length();
    // for (int i = 0; i < n/2; i++)
    // {
    //     char temp = rev[i];
    //     rev[i] = rev[(n-1) - i];
    //     rev[(n-1)-i] = temp;
    // }

    // if (str == rev)
    // {
    //     cout<<"palindrome\n";
    // }
    // else
    // {
    //     cout<<"not palindrome\n";
    // }
    }

    {
        string s1 = "gfeffg";
        int n = s1.length();
        int left = 0;   // ! Left is index of start of string
        int right = n - 1; // ! Right is index of end of string
        int flag = 1;
        while (left < right)
        {
            if (s1[left] == s1[right])
            {
                left++;
                right--;
            }
            else
            {
                flag = 2;
                cout<<"Not palindrome\n";
                break;
            } 
            
        }
        if (flag == 1)
        {
            cout<<"Palindrome\n";   
        }
        
        
        
    }
    
    
    return 0;
}