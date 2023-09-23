#include <iostream>
using namespace std;

struct complex
{
    int real;
    int img;
};


int main()
{
    complex c1;
    c1.real = 5;
    c1.img = 7;
    cout<<"First complex num is "<<c1.real<<" + "<<c1.img<<"i\n";
    complex c2;
    c2.real = 6;
    c2.img = 11;
    cout<<"Second complex num is "<<c2.real<<" + "<<c2.img<<"i\n";

    complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    cout<<"Addition of c1 and c2 gives =>\n";
    cout<<c3.real<<" + "<<c3.img<<"i\n";


    complex n1,n2;
    cout<<"Enter the real part for 1st complex num\n";
    cin>>n1.real;
    cout<<"Enter the imaginary part for 1st complex num\n";
    cin>>n1.img;
    cout<<"First complex number is :"<<n1.real<<" + "<<n1.img<<"i\n";

    cout<<"Enter the real part for 2nd complex num\n";
    cin>>n2.real;
    cout<<"Enter the imaginary part for 2nd complex num\n";
    cin>>n2.img;
    cout<<"Second complex number is :"<<n2.real<<" + "<<n2.img<<"i\n";

    complex n3;
    n3.real = n1.real + n2.real;
    n3.img = n1.img + n2.img;
    cout<<"Result after additon :"<<n3.real<<" + "<<n3.img<<"i";




    
    return 0;
}