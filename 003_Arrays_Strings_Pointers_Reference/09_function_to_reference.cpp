#include <iostream>
using namespace std;

int & fun()
{
    int x = 10;
    return x;
}

int main()
{
    {
    int &z = fun();
    cout<<fun()<<" ";
    z = 30;
    cout<<fun()<<"\n";
    }

{
    // int &y; // ! Cannot keep reference unitialized

    /* Once refrenced to one variable it cannot be refrenced to other variable
    int x = 10, y = 20;
    int &n = x;
    &n = y;
    */
    

}
    
    

    return 0;
}