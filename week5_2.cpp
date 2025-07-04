#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
----PRIME FACTORIZATION----> it is about finding all prime factors of a given number. Algorithms to find all prime factors ->
1) Trial Division
2) Wheel Factorization
3) Sieve Method
we will only study trial method as other are advanced
*/

// TRIAL DIVISION -->
vector<int> factor(int n)
{
    vector<int> facts;
    for (long long d = 2; d * d <= n; d++)
    {
        /*
        We will use the fact that the smallest divisor of any number N is prime, and it will be less than √N.
        N can be represented as p^q0 ∗ p1^q1 ∗ p2^q2 ∗…∗ pk^qk where pi is prime. Let us assume that the prime array is sorted.
        */
        while (n % d == 0)
        {   /*
            let the N = 8. Then when loop starts d = 2 and 2 ^ 2 <= 8 then the while loop will start to work and will push 2 in facts three times 
            after that N = 1 and it will return facts which had stored 2, 2, 2.
            */
            facts.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        facts.push_back(n);
    return facts;
}

int main()
{
    /*
    MODULAR ARITHMETIC --> is arithmetic operations involving taking modulo with some modulus, so that solution doesn't overflow.
    1) MODULAR ADDITION => (A + B) % M = ((A % M) + (B % M)) % M
    2) MODULAR SUBTRACTION =>(A−B) % M = ((((A % M)− (B % M)) % M) + M) % M
    3) MODULAR MULTIPLICATION => (A ∗ B) % M = ((A % M) ∗ (B % M)) % M
*/
}