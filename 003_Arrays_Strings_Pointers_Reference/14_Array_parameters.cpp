#include <iostream>
using namespace std;

void print(int arr[])
{
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main()
{
    int arr[6] = {7,2,3,4,5,6};
    print(arr);
    return 0;
}