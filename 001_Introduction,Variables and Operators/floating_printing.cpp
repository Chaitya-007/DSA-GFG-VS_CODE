#include <iostream>
using namespace std;
int main()
{
    double x = 1.2300;
    cout<<x<<"\n"; //! No trailing zeroes
    double y = 1567.56732;
    cout<<y<<"\n"; //! Precision of 6 digits is only allowed
    double z = 1244567.45;
    cout<<z<<"\n"; //! Converted to printing format since more than 6 before decimal
    double a = 124456.67;
    cout<<a<<"\n"; //! Rounding off to 6 precision digits
    double b = 123e+2;
    cout<<b<<"\n"; //! printing to 12300

    

    return 0;
}