#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    cout<<a/b<<"\n";
    // ! Throws error
    cout<<a%b<<"\n";
    // ! Undefined behaviour

    // ? Three way comparision operator
    auto res = a <=> b; //! Returns object whose value depends on
    // ! if a < b => value is less than zero
    // ! if a == b => value is equal to zero
    // ! if a > b => value is greater than zero

    if (res < 0)
    {
        cout<<"res is zero\n";
    }
    else if (res > 0)
    {
        cout<<"res is greater than zero\n";
    }
    else
    {
        cout<<"res is equal to zero\n";
    }
    
    
    
    

    return 0;
}