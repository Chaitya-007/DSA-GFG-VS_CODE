#include <bits/stdc++.h>
using namespace std;

class Example {
public:
void fun(int x) const {
cout << "Const. version called";
}

void fun(double x) { cout << "Normal version called"; }
};
int main()
{
const Example e;
e.fun(5.67);

return 0;
}