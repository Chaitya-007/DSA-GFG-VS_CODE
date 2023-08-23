#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    
    cout<<sizeof(arr)<<"\n"; // ! => 5(no. of elements) * 4(size of integer) = 20
    cout<<sizeof(arr)/sizeof(arr[0])<<"\n"; // ! => (5 * 4)/4 = 5

    int ar[6] = {1,2};
    cout<<sizeof(ar)/sizeof(ar[0]); // ! => (6 * 4)/4 = 6
                                        
    return 0;
}