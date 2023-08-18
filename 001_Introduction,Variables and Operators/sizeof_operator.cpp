#include <iostream>
using namespace std;
int main()
{
    // !Sizeof() operators return size in bytes
    cout<<"This is the size of int => "<<sizeof(int)<<endl;
    cout<<"This is the size of short => "<<sizeof(short)<<endl;
    cout<<"This is the size of float => "<<sizeof(float)<<endl;
    cout<<"This is the size of char => "<<sizeof(char)<<endl;
    cout<<"This is the size of double => "<<sizeof(double)<<endl;
    cout<<"This is the size of long  => "<<sizeof(long)<<endl;
    cout<<"This is the size of long long => "<<sizeof(long long)<<endl;
   

    // ?Evaluated at compile time
   { int x = 10;
    cout<<"The value of x is => "<<x<<endl;
    cout<<sizeof(x++)<<"\n"; //!Here x++ will happen on compile time but will not happen at run time
    cout<<"The value of x is => "<<x<<endl;
    
   }

   {
    int x;
    double d;
    cout<<sizeof(x)<<"\n";
    cout<<sizeof(d)<<"\n";
    cout<<"Printing long long literal"<<sizeof(10ll)<<"\n";
    cout<<"Printing double"<<sizeof(10.5)<<"\n";
   }
   return 0;
}