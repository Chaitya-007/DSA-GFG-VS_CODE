#include <iostream>
using namespace std;

namespace chaitya 
{
    int val = 50;
    int getval()
    {
        return val*10;
    }

}
int main()
{
    double val = 10.0;
    cout<<val<<"\n";                  // ! prints 10.0
    cout<<chaitya::val<<"\n";         // ! prints 50
    cout<<chaitya::getval();          // ! prints 500

    return 0;
}