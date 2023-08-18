// ! IO Manipulation

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    {
    // ! Bool Conversion
    bool a = true;
    cout<<a<<"\n";
    cout<<std::boolalpha;
    cout<<a<<"\n";
    cout<<std::noboolalpha;
    cout<<a<<"\n";
    }

    {
        // ! Integer Conversion
        int a = 26, b = 20;
        cout<<a<<" "<<b<<"\n";

        // ! Converting to hex
        cout<<std::hex;
        cout<<a<<" "<<b<<"\n";

        // ! Converting to oct
        cout<<std::oct;
        cout<<a<<" "<<b<<"\n";

        // ! Converting to dec
        cout<<std::dec;
        cout<<a<<" "<<b<<"\n";
    }

    {
        int a = 26;
        cout<<std::showbase;  //! sets showbase flag = 1
        cout<<std::oct;
        cout<<a<<"\n";
        cout<<std::hex;
        cout<<a<<"\n";

        cout<<std::noshowbase; //! sets showbase flag = 0
        cout<<std::oct;
        cout<<a<<"\n";
        cout<<std::hex;
        cout<<a<<"\n";

    }

    {
        int a = 26;
        cout<<std::showbase;
        cout<<std::hex;
        cout<<a<<"\n";
        cout<<std::showpos; //! It doesn't works...but the reason I don't know
        cout<<a<<"\n";
        cout<<std::noshowpos;
    }

    {
        int a = 26;
        cout<<std::showbase;
        cout<<std::hex;
        cout<<std::uppercase; //! sets uppercase flag = 1
        cout<<a<<"\n";
        cout<<std::nouppercase; //! sets uppercase flag again to 0
        cout<<a<<"\n"; 
        cout<<std::noshowbase;
        cout<<std::dec;
    }

    {
        int a = 26;
        cout<<setw(5);
        cout<<setfill('*');
        cout<<a<<"\n";
        cout<<setw(5);
        cout<<"Hi"<<"\n";
        cout<<std::left;
        cout<<setw(5);
        cout<<"Yes"<<"\n";
    }
    return 0;
}