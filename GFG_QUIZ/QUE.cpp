#include <iostream>
using namespace std;

class Test
{

public:
    Test()
    {
        cout<<"Constructor\n";
    }
    
};


int main()
{
    Test *t = (Test *)malloc(sizeof(Test));

    return 0;
}