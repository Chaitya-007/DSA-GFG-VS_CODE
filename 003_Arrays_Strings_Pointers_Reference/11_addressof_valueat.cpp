#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    // ! Address of operator
    cout<<&x<<"\n";
    // ! Value at operator
    cout<<*(&x)<<"\n";
    return 0;
}