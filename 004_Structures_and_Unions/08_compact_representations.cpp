#include <iostream>
using namespace std;

struct s3
{
    // ! This is called compact representation
    double d;
    char c1;
    char c2;
}__attribute__((packed));

struct s4
{
    double d;
    char c1;
    char c2;
};

int main()
{
    // ? Size of compact representation
    cout<<sizeof(s3)<<"\n";
    // ? Size wihtout compact representation
    cout<<sizeof(s4);
    return 0;
}