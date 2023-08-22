#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   { 
    array<int, 3> arr;          // ! Declares array of 3 size with garbage values {g_val1,g_val2,g_val3}
    array<int, 5> arr2 = {1,2,3};   // ! {1,2,3,0,0}
    int arr3[5] = {0};          // ! {0,0,0,0,0}
   }         

    {
    // ! 1] .fill function

    array<int, 5> arr;
    arr.fill(5);                // ! {5,5,5,5,5}
    }

    {
    // ! 2] .at(index) function

    array<int, 5>arr = {1,2,3};
    // ! Prints array
    // for (int i = 0; i < 5; i++)
    // {
    //   cout<<arr.at(i)<<" ";
    // }
    
    }

    {
    // ! Iterators => begin(),end(),rbegin(),rend()
    array<int, 5> arr = {1,3,4,5,6};

    // ! Prints array in forward direction
    // for (auto itr = arr.begin(); itr != arr.end(); itr++)
    // {
    //     cout<<*itr<<" ";
    // }

    // ! Prints array in reverse direction => with itr++
    // for (auto itr = arr.rbegin(); itr != arr.rend(); itr++)
    // {
    //     cout<<*itr<<" ";
    // }
    
    // ! Another way for reverse direction => Here decrement itr--
    // for (auto itr = arr.end() - 1; itr >= arr.begin(); itr--)
    // {
    //     cout<<*itr<<" ";
    // }
    
    // ! Using for each loop
    // for (auto itr : arr)
    // {
    //     cout<<itr<<" ";
    // }
    
    
    }

    {
    // ! Functions 
    array<int, 5> arr = {1,2,3};
    cout<<arr.size()<<"\n"; // ! => Gives size of array 
    cout<<arr.front()<<"\n"; // ! => Gives first element or arr.at(0)
    cout<<arr.back();  // ! => Gives last element or arr.at(arr.size() - 1)
    }

    {
        // ? Inside int main()
        // ? int arr[1000000] => 10^6
        // ? bool arr[10000000] => 10^7

        // ! Outside int main()
        // ! int arr[10000000] => 10^7
        // ! bool arr[100000000] => 10^8
    }
    
    
    
    
    return 0;
}