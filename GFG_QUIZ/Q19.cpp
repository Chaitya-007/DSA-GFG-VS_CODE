#include <iostream>
using namespace std;
int main()
{
    const char* p = "12345";
    const char **q = &p;
    *q = "abcde";
    const char *s = ++p;
    p = "XYZWYU";
    cout<<*++s;
    return 0;
}