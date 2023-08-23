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
    // cout<<arr.size()<<"\n"; // ! => Gives size of array in number => 5
    // cout<<arr.front()<<"\n"; // ! => Gives first element or arr.at(0)
    // cout<<arr.back();  // ! => Gives last element or arr.at(arr.size() - 1)

    
    
    }

    {
        // ? Inside int main()
        // ? int arr[1000000] => 10^6
        // ? bool arr[10000000] => 10^7

        // ! Outside int main()
        // ! int arr[10000000] => 10^7
        // ! bool arr[100000000] => 10^8
    }

    {
        array<int, 5>arr = {1,2,3,3,5};
        array<int, 5>brr = {10,20,30,40,50};

        // reverse(arr.begin(),arr.end()); // ! makes array as {5,4,3,2,1}

        // int sum = accumulate(arr.begin(),arr.end(),0); // ! Best Way to sum the array
        // cout<<sum; // ! => 15

        // swap(arr,brr); // ! arr bcomes => {10,20,30,40,50} , brr bcomes => {1,2,3,4,5}
                       // ? only possible if size of both arrays is same else not possible

        // int co = count(arr.begin(),arr.end(),3); // ! count no. of occurences
        // cout<<co;


    
         /*
    *    This gives incorrect output
    *    int sum = 0;
    *    accumulate(arr.begin(),arr.end(),sum);
    *    cout<<sum; => 0
        */


    

    }

    {
        array<int, 5>arr = {1,2,3,4,5};
         

        

        



    }
    
    
    
    
    return 0;
}