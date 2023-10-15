#include <iostream>
using namespace std;


class Test
{
    int x;
    public:
    void* operator new(size_t size);
    void operator delete(void*);

    Test(int i)
    {
        x = i;

        cout<<"Constructor calledn";
    }

    ~Test()
    {
        cout<<"Destructor calledn";
    }
};

void* Test::operator new(size_t size)
{
    void *storage = malloc(size);
    cout<<"new calledn";
    return storage;
}

void Test::operator delete(void *p)
{
    cout<<"delete called n";
    free(p);
}

int main()
{
    Test *m = new Test(5);
    delete m;
    return 0;
}