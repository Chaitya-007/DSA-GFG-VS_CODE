#include <iostream>
using namespace std;


class base
{
    public:
    virtual void show()
    {
        cout<<"\nBase";
    }
};

class derived : public base 
{
    public:
    void show()
    {
        cout<<"\nDerived";
    }
};

int main()
{
    base *bp = new derived;
    bp->show();

    base &br = *bp;
    br.show();
    return 0;
}