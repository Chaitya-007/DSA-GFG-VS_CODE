#include <iostream>
using namespace std;
int main()
{
    {
        //! Declare a wild pointer (NOT RECOMMENDED)
        int *ptr;
        cout<<*ptr<<"\n";
    }

    {
        // ! Best way to initialize
        int *ptr = NULL;
        if (ptr) // ! ptr evaluates to false when initalized to NULL
        {
            cout<<"Not Null"<<"\n";
        }
        else
        {
            cout<<"NULL"<<"\n";
        }
    }

    {
        int *ptr = NULL;
        cout<<*ptr<<"\n"; // ! Prints nothing 
        cout<<"5";  // ! Noting getts printed => output is still blank

    }

    {
        int *ptr = 0; // ! No compile error => 0 is evaluated as NULL
        // int *p2 = 10; // ! Will give compile error
        if (ptr) // ! ptr evaluates to false when initalized to NULL
        {
            cout<<"Not Null"<<"\n";
        }
        else
        {
            cout<<"NULL"<<"\n";
        }

    }
    
    return 0;
}