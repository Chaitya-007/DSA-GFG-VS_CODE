#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   { //! Fixed Format
    //? Just think for after decimal

    double x = 1.23,y = 1122456.453;
    cout<<std::fixed;
    cout<<x<<"\n"
        <<y<<"\n";
    // ! Here, precision is after decimal(by default 6)
    // ! Trailing zeroes are shown

    cout<<std::setprecision(2);
    cout<<x<<"\n"
        <<y<<"\n";
    // ! After decimal only two places will be print

    double z = 1.2e+7;
    cout<<z;
    //! No restriction for before decimal, two zeroes after decimal
   }
cout<<"\n"<<"**************************************************************"<<"\n";
   {
    // todo cout<<std::uppercase; for showing e to E
    // todo cout<<std::showpos; for showing + sign
    // ! Scientific format
    double x = 1.23, y = 1122456.453;
    cout<<std::scientific;
    cout<<x<<"\n"
        <<y<<"\n";
    
    cout<<std::setprecision(2);
    cout<<x<<"\n"
        <<y<<"\n";
    // ! After decimal it will have two places only

    double z = 1.2e+7;
    cout<<z;
   }

    return 0;
}