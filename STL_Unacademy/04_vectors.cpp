#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    {
    vector<int>v;
    // ! .push_back() function
    // v.push_back(0); // {0}
    // v.push_back(2); // {0,2}
    // v.push_back(3); // {0,2,3}
    // v.push_back(4); // {0,2,3,4}

    // ! .pop_back() function
    // v.pop_back(); // {0,2,3}
    // v.pop_back(); // {0,2}

    // ! .size() function
    // cout<<v.size()<<"\n"; // => 2

    // ! .clear() function
    // v.clear(); // => Clears all elements
    // cout<<v.size();
    }


    
    {
        // ! Giving same values to all elements
        vector<int>vec(4,0); // {0,0,0,0}
        vector<int>vec2(5,10); // {10,10,10,10,10}
        // ! After this also you can push_back like
        vec2.push_back(17); // {10,10,10,10,10,17}
    }

    {
        // ! Assigning values of one vector to another
        vector<int> vec(4,10); // {10,10,10,10}
        vector<int> vec2(vec); // vec2 = {10,10,10,10}
        
    }

    {
        // ! Swapping function
        vector<int>v;
        v.emplace_back(0);
        v.emplace_back(1);
        v.emplace_back(2);
        v.emplace_back(3);
        vector<int>v2;
        v2.emplace_back(5);
        v2.emplace_back(10);
        v2.emplace_back(15);
        v2.emplace_back(20);
        // todo:    
        swap(v,v2);  
    }

    {
        // ! 2d Vector
        vector<int>v;
        v.emplace_back(0);
        v.emplace_back(1);
        v.emplace_back(2);
        v.emplace_back(3);
        vector<int>v2;
        v2.emplace_back(5);
        v2.emplace_back(10);
        

        vector<vector<int>> vec;
        vec.push_back(v);
        vec.push_back(v2);

        // ! Traditional way 
        // for (int i = 0; i < vec.size(); i++)
        // {
        //     for (int j = 0; j < vec[i].size(); j++)
        //     {
        //         cout<<vec[i][j]<<" ";
        //     }
        //     cout<<"\n";
            
        // }

        // ! Use while competitive programming
        // for (auto vctr: vec)
        // {
        //     for (auto itr: vctr)
        // {
        //     cout<<itr<<" ";
        // }
        // }
        
        // ! How to initialize vector of m * n
        vector<vector<int>> rec(10, vector<int> (20,0));

        for (auto vctr: rec)
        {
        for (auto itr: vctr)
        {
            cout<<itr<<" ";
        }
        cout<<endl;
        }
        
    }
    
    
    return 0;
}