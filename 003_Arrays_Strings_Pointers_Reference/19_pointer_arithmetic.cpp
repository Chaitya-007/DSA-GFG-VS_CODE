#include <iostream>
using namespace std;
int main()
{
    {
    int arr[] = {10,20,30,40,50,60};
    int *ptr = arr;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr++;
    cout<<*ptr<<" "<<ptr<<"\n";
    cout<<"*****************************\n";
    }

    {
    int arr[] = {10,20,30,40,50,60};
    int *ptr = arr;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr++;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr--;
    cout<<*ptr<<" "<<ptr<<"\n";
    cout<<"*****************************\n"; 
    }

    {
    int arr[] = {10,20,30,40,50,60};
    int *ptr = arr;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr = ptr + 3;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr = ptr - 2;
    cout<<*ptr<<" "<<ptr<<"\n";
    cout<<"*****************************\n";    
    }

    {
    int arr[] = {10,20,30,40,50,60};
    int *ptr1 = arr;
    cout<<*ptr1<<" "<<ptr1<<"\n";
    ptr1 = ptr1 + 3;
    cout<<*ptr1<<" "<<ptr1<<"\n";
    int *ptr2 = ptr1 - 2;
    cout<<*ptr2<<" "<<ptr2<<"\n";
    cout<<(ptr1-ptr2)<<"\n";
    cout<<"*****************************\n";    
    }
    



    return 0;
}