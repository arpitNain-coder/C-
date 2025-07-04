#include <bits/stdc++.h>
#include <vector>
using namespace std;
/*
    <---PRIMALITY TESTING---> It is an algorithm for determining whether the number is prime or composite. Algorithms for primality testing-
    1) Brute Force
    2) Square root method
    */

// BRUTE FORCE METHOD for Primality testing ->
bool is_prime1(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
        {
            return false;
        }
    return n > 1;
}

// SQURARE ROOT METHOD for primality testing ->
bool is_prime2(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

/*
To find all the prime numbers till a given number we use ->
----SEIVE OF ERATOSTHENES---->
*/
void sieve(int n)
{
    bool primes[n + 1];
    fill(primes, primes + n + 1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= n; i++)
    { /* 
        Es code me pehle number lega fir uske sare multiples ko false krdega... and why there is j = i * i coz sare i ke multiples before i
        will be smaller prime numbers then i... eg -> let i = 5 then i * i = 25 to sare old multiples of 5 are , 5*2, 5*3, 5*2*2 which are 
        declared false already in those prime turns.
     */ 
        if (primes[i])
            for (int j = i * i; j <= n; j += i) {
                primes[j] = false;
            }                           // It's time complexity is O(N * log(log N)).
    
    }
}

int main()
{
}