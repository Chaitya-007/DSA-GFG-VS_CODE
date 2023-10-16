#include <bits/stdc++.h>
using namespace std;
int i = 5;

class Example {
public:
~Example() {
i = 7;
}
};

int func()
{
Example e;
return i;
}

int main()
{
cout << func() << endl;
return 0;
}