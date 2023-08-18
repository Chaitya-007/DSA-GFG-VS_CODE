#include <iostream>
using namespace std;


// ! Key Idea 
// ! Start For Loop from i = 2 to i < n (To check whether it is prime)
// ! 1] Check firstly whether factor is prime
// ! 2] If prime => a] Divide the number with factor
// !                b] Then multiply factor with itself and again divide
// !                   If divisible => print that factor again
// !                   else         => increment and jump to step 1


int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            return false;
        }
        
    }

    return true;
    
}

void prime_facotors(int n)
{
    // ? Take n = 100
    for (int i = 2; i <= n; i++)
    {

    // ? Check for 2,3,4,5....till 100
    // ? E.g i = 2 => Evaluates to be true
        if (isPrime(i))
    {
        int x = i;
        // ? E.g 1]100/2 => true
        // ?     2]100/4 => true
        while (n%x == 0)
        {
            cout<<i<<" ";  // ? => Prints 2
                           // ? => Prints 4...
            x = x*i;
            // ? x = 2*2 = 4
        }
        
    }

    }
    
    
    
}

int main()
{
    prime_facotors(25);
    return 0;
}