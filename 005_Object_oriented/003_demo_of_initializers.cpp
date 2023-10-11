#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout<<"Default\n";
    }
    Test(int x)
    {
        cout<<"Parameterised\n";
    }
   
};

// ! Without using list initializers
class Main
{
    private:
    Test t;

    public:
    Main()
    {
        t = Test(10);
    }
};

// ! With list initializers
class Main2
{
private:
    Test t;

public:
    Main2():t(10)
    {}
};




int main()
{
    cout<<"Without using list Initializer\n";
    cout<<"Both default and parameterized is printed\n";
    Main m;
    cout<<"By using list Initiliazer\n";
    cout<<"Only parameterized is printed\n";
    Main2 m2;
    return 0;
}