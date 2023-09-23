#include <iostream>
using namespace std;

struct node
{
    double data;
    union 
    {
        struct 
        {
            node *left,*right;
        };

        struct 
        {
            node *prev,*next;
        };
        
        
    };
    
};

int main()
{
    
    return 0;
}