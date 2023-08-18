#include <iostream>
using namespace std;
int main()
{
    int n = 15;
    bool next_prime = true;

    while (1)
    {
        // ! Increments to next number
        n++;
        // ! Intialize for each iteration
        next_prime = true;

        // ! Checks whether it is prime or not
        for (int i = 2; i < n; i++)
        {
            if (n%i == 0)
            {
                // ! If not prime then next_prime will remain false
                next_prime = false;
                break;
            } 
        }
        

        // ! If prime then next_prime = true and condition evaluates to true and loop breaks
        if (next_prime)
        {
            cout<<"Next Prime = "<<n;
            break;
        }
            
    }

    

    return 0;
}