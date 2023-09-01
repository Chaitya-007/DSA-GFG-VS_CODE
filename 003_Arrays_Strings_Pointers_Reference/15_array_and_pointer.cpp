#include <iostream>
using namespace std;
int main()
{
    {
        //! Pointer and arrays both are different things
    int arr[] = {1,2,3,4,5,6};
    int *ptr = arr; 
    // int *ptr = &arr;  //! Will give compile error
    cout<<sizeof(arr)<<"\n";
    cout<<sizeof(ptr)<<"\n";
    cout<<*(arr + 2)<<"\n"; // ! Not recommended use => arr[i]
    cout<<ptr[2]<<"\n";     // ! Not recommended use => *(ptr + 2)
    }

    {
        cout<<"**************************\n";
        int arr[] = {10,20,30};
        int *p1 = arr;
        int (*p2)[3] = &arr;
        cout<<*p1<<"\n";
        cout<<**p2<<"\n";
        p2++;
        cout<<**p2<<"\n";

    }
    

    return 0;
}