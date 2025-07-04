#include <bits/stdc++.h>
using namespace std;

// EUCLIDEAN ALGO -> it can be done by recursion too.
int gcd_(int a, int b)
{
    while (a)
    {
        int t = a;
        a = b % a;
        b = t;
    }
    return b;
}
/* For eg - GCD(8, 10) here A = 8, B = 10
step 1 -> GCD(8, 10) == GCD(2, 8)    (GCD(A, B) = GCD(B % A, A))*
step 2 -> GCD(2, 8) == GCD(0, 2)      here at last A = 0 and B = 2
so our answer is 2*/

int main()
{
    /*
    GREATEST COMMON DIVISOR (GCD) --> to find it we can use 2 methods.
    1) Use inbuilt function of C++  function --> __gcd this works in older versions of c++ and in my vs code version too.
    2) Euclidean Algorithm - > it states that GCD(A, B) = GCD(B % A, A) and when A = 0, the solution is B at that time.
    */
}