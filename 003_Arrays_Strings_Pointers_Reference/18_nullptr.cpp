#include <iostream>
using namespace std;
int main()
{
    {
        int x = NULL; // ! No error => NULL is evaluated as 0 which is problematic
        cout<<x<<"\n";      // ! prints => 0
        bool pointer = NULL; // ! When a bool variable is initialized to NULL 
                             // ! => evaluates to false
        if (pointer)
        {
            cout<<"Not NULL";
        }
        else
        {
            cout<<"NULL";
        }
 
    }

    // {
    //     int x = nullptr; // ! This will not allow (Always recommended to use nullptr)
    // }
    



    return 0;
}